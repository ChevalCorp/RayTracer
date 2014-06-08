/*
** base_rt_func.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Tue Feb 25 14:41:02 2014 marc-aurele lautel
** Last update Sun Jun  8 20:35:56 2014 marc-aurele lautel
*/

#include	"rtv1.h"

/*
Compare tout les k des objets de la scene
et renvoi la position de l'objet dans la liste.
la condition if permet de chercher le plus petit k parmit tout
les objets de la scene. (c.a.d: )
calc_ray() pour la lumiere;
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
  calc_coor_k(rt, savepos, tmp_k);
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
void		re_init(t_obj *tmp)
{
  tmp->color->r = tmp->s_color->r;
  tmp->color->v = tmp->s_color->v;
  tmp->color->b = tmp->s_color->b;
}

void		image_fill(t_rtv1 *rt)
{
  int		x;
  int		y;
  int		k;

  y = 0;
  rt->img->data = mlx_get_data_addr(rt->img->img_ptr, &rt->sbe->bpp, 
				    &rt->sbe->sizeline, &rt->sbe->endian);
  while (y < rt->img->imgy)
    {
      x = 0;
      while (x < rt->img->imgx)
	{
	  k = calcul_pixel(rt, x, y);
	  aff_pixel(k, rt, x, y);
	  x++;
	}
      y++;
    }
  mlx_put_image_to_window(rt->img->mlx_ptr, 
			  rt->img->win_ptr, rt->img->img_ptr, 0, 0);
}
