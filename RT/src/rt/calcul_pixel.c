/*
** calcul_pixel.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 16:44:41 2014 Olivier Remy
** Last update Thu Jun  5 16:45:34 2014 Olivier Remy
*/

#include	"funcrt.h"

int		calcul_pixel(t_rtv1 *rt, int x, int y)
{
  t_obj		*obj;
  int		i;
  int		color;

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
