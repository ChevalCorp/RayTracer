/*
** base_rt_func.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Tue Feb 25 14:41:02 2014 marc-aurele lautel
** Last update Sun Jun  1 20:36:11 2014 Antoine Favarel
*/

#include	"rtv1.h"

/*
Compare tout les k des objets de la scene
et renvoi la position de l'objet dans la liste.
la condition if permet de chercher le plus petit k parmit tout
les objets de la scene. (c.a.d: )
*/
int		calc_k(t_rtv1 *rt)
{
  t_obj		*tmp;
  double	tmp_k;
  int		savepos;
  int		i;

  i = 0;
  tmp = rt->start;
  tmp_k = -1;
  while (i < rt->lenght)
    {
      if (tmp->k > 0.00001 && (tmp_k == -1 || tmp_k > tmp->k))
	{
	  tmp_k = tmp->k;
	  savepos = i;
	}
      tmp = tmp->next;
      i++;
    }
  return (savepos);
}

/*
Set les point Vx, Vy, Vz de la camera. (les coordonnées de la droite de vision)
Rassemble tout les k des differents objets de la scene
*/
int			calcul_pixel(t_rtv1 *rt, int x, int y)
{
  t_obj			*obj;
  int			i;
  int			color;

  i = 0;
  init_eyes(rt, x, y);
  obj = rt->start;
  while (i < rt->lenght)
    {
      if (obj->type == 0)
	inter_plan(rt->eye, obj);
      else if (obj->type == 1)
	inter_sphere(rt->eye, obj);
      else if (obj->type == 3)
	inter_cyl(rt->eye, obj);
      else if (obj->type == 2)
	inter_cone(rt->eye, obj);
      obj = obj->next;
      i++;
    }
  color = calc_k(rt);
  return (color);
}

/*
la variable color retourne le numero (position) de l'objet dans la liste
et l'envoi a la fonction aff_pixel pour selectionner les couleurs correspondante a l'objet.

l'appel a cette fonction se trouve dans le mlx_loop (expose_func.c)
*/

void		*threading_part(void *region)
{
  t_regionrtv1	*r_rtv1;
  t_rtv1	*rt;
  int		x;
  int		y;
  int		color;

  r_rtv1 = region;
  rt = r_rtv1->rtv1;
  y = r_rtv1->y_start;
  while (y < r_rtv1->y_limit)
    {
      x = 0;
      while (x < rt->img->imgx)
	{
	  pthread_mutex_lock (&(rt->mutex_lock));
	  color = calcul_pixel(rt, x, y);
	  aff_pixel(color, rt, x, y);
	  x++;
	  pthread_mutex_unlock (&(rt->mutex_lock));
	}
      y++;
    }
  return (NULL);
}

t_regionrtv1	*make_region(t_rtv1 *rt, int y_start, int y_limit)
{
  t_regionrtv1	*region;

  region = malloc(sizeof(t_regionrtv1));
  region->rtv1 = rt;
  region->y_start = y_start;
  region->y_limit = y_limit;
  return (region);
}
void		image_fill(t_rtv1 *rt)
{
  pthread_t	pt_1;
  pthread_t	pt_2;
  pthread_t	pt_3;
  pthread_t	pt_4;
  t_regionrtv1	*region;

  rt->img->data = mlx_get_data_addr(rt->img->img_ptr, &rt->sbe->bpp, 
				    &rt->sbe->sizeline, &rt->sbe->endian);
  region = make_region(rt, 0, 200);
  pthread_create(&pt_1, NULL, &(threading_part), (void *)region);
  region = make_region(rt, 200, 400);
  pthread_create(&pt_2, NULL, &(threading_part), (void *)region);
  region = make_region(rt, 400, 600);
  pthread_create(&pt_3, NULL, &(threading_part), (void *)region);
  region = make_region(rt, 600, 800);
  pthread_create(&pt_4, NULL, &(threading_part), (void *)region);
  pthread_join(pt_1, NULL);
  pthread_join(pt_2, NULL);
  pthread_join(pt_3, NULL);
  pthread_join(pt_4, NULL);
  mlx_put_image_to_window(rt->img->mlx_ptr, 
			  rt->img->win_ptr, rt->img->img_ptr, 0, 0);
}
