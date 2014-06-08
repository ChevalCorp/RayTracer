/*
** aff_pixel.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 16:07:38 2014 Olivier Remy
** Last update Thu Jun  5 16:08:39 2014 Olivier Remy
*/

#include	"funcrt.h"

int		aff_pixel(int color, t_rtv1 *rt, int x, int y)
{
  t_obj		*tmp;
  int		i;

  tmp = rt->start;
  i = 0;
  while (i < rt->lenght)
    {
      if (i == color)
        {

          put_pixel_to_img(rt->img->data, get_dot(x, y), get_color(tmp-\
								   >color->r, tmp->color->v, tmp->color->b), rt->sbe->sizeline);
          return (0);
        }
      tmp = tmp->next;
      i++;
    }
  put_pixel_to_img(rt->img->data, get_dot(x, y), get_color(40, 40, 40),\

                   rt->sbe->sizeline);
  return (0);
}
