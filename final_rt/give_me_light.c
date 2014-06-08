/*
** give_me_light.c for rtv1 in /home/lautel_m/Documents/2013_rtv1_test
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Wed Jun  4 17:36:38 2014 marc-aurele lautel
** Last update Sun Jun  8 21:37:04 2014 marc-aurele lautel
*/

#include	"rtv1.h"

void		calc_new_color(t_rtv1 *rt, t_obj *obj, t_obj *lum)
{
  double	r;
  double	v;
  double	b;
  double	coeff;

  coeff = 1.5;
  if (obj->lux->angle >= 0.000001)
    {
      obj->s_color->r = obj->color->r;
      obj->s_color->v = obj->color->v;
      obj->s_color->b = obj->color->b;
      r = obj->color->r;
      v = obj->color->v;
      b = obj->color->b;
      r *= obj->lux->angle;
      v *= obj->lux->angle;
      b *= obj->lux->angle;
      r += (lum->color->r * obj->lux->angle * coeff);
      v += (lum->color->v * obj->lux->angle * coeff);
      b += (lum->color->b * obj->lux->angle * coeff);
      obj->color->r = r;// / rt->nb_spot;
      obj->color->v = v;// / rt->nb_spot;
      obj->color->b = b;// / rt->nb_spot;
    }
  else
    {
      obj->color->r = 0;
      obj->color->v = 0;
      obj->color->b = 0;
    }
}

void		calc_angle(t_rtv1 *rt, t_obj *obj, t_obj *lum)
{
  double       	A;
  double	B;
  double       	norme;

  obj->lux->angle = obj->eye->NVx * obj->lux->VLx + obj->eye->NVy * obj->lux->VLy + obj->eye->NVz * obj->lux->VLz;

  A = sqrt(powf(obj->lux->VLx, 2) + powf(obj->lux->VLy, 2) + powf(obj->lux->VLz, 2));

  B = sqrt(powf(obj->eye->NVx, 2) + powf(obj->eye->NVy, 2) + powf(obj->eye->NVz, 2));
  norme = A * B;

  obj->lux->angle /= norme;

  calc_new_color(rt, obj, lum);
}

void		calc_light(t_rtv1 *rt, t_obj *lum, t_obj *obj)
{
  /* vec lumiere */
  obj->lux->VLx = - obj->lux->poskx + lum->eye->xeye;
  obj->lux->VLy = - obj->lux->posky + lum->eye->yeye;
  obj->lux->VLz = - obj->lux->poskz + lum->eye->zeye;
  obj->lux->VecLen = sqrt(pow(obj->lux->VLx, 2) + pow(obj->lux->VLy, 2)
			  + pow(obj->lux->VLz, 2));
  select_t_vec(rt, obj);
  /* vec norm lumiere */
  obj->lux->NVLx = obj->lux->VLx / obj->lux->VecLen;
  obj->lux->NVLy = obj->lux->VLy / obj->lux->VecLen;
  obj->lux->NVLz = obj->lux->VLz / obj->lux->VecLen;
  calc_angle(rt, obj, lum);
}

void		give_me_light(t_rtv1 *rt, t_obj *obj)
{
  t_obj		*lum;
  int		i;

  i = 0;
  rt->nb_spot = 0;
  lum = rt->start;
  while (i < rt->lenght)
    {
      rt->nb_spot++;
      i++;
    }
  lum = rt->start;
  i = 0;
  while (i < rt->lenght)
    {
      if (lum->type == 4)
	calc_light(rt, lum, obj);
      lum = lum->next;
      i++;
    }
}

/*                                                                             
calcucle du pt d'intersection
*/
void            calc_coor_k(t_rtv1 *rt, int savepos, double k)
{
  t_obj         *obj;
  int           i;

  obj = rt->start;
  i = 0;
  while (i < rt->lenght)
    {
      if (i == savepos)
        {
          obj->lux = malloc(sizeof(t_lux));
          obj->lux->poskx = (double)rt->eye->xeye + rt->eye->Vx * k;
          obj->lux->posky = (double)rt->eye->yeye + rt->eye->Vy * k;
          obj->lux->poskz = (double)rt->eye->zeye + rt->eye->Vz * k;
          calc_vec_and_norm(rt, obj);
          give_me_light(rt, obj);
        }
      obj = obj->next;
      i++;
    }
}
