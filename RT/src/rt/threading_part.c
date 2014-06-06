/*
** threading_part.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 16:46:13 2014 Olivier Remy
** Last update Fri Jun  6 15:48:03 2014 Olivier Remy
*/

#include	"funcrt.h"

void            *threading_part(void *region)
{
  t_regionrt	*r_rt;
  t_rt		*rt;
  int		color;

  r_rt = region;
  rt = r_rt->rt;
  rt->pxl->y = r_rt->y_start;
  while (rt->pxl->y < r_rt->y_limit)
    {
      rt->pxl->x = 0;
      while (rt->pxl->x < rt->mlx->imgx)
        {
          pthread_mutex_lock(&(rt->mutex_lock));
          color = calcul_pixel(rt, rt->pxl->x, rt->pxl->y);
          aff_pixel(color, rt, rt->pxl->x, rt->pxl->y);
          rt->pxl->x++;
          pthread_mutex_unlock (&(rt->mutex_lock));
        }
      rt->pxl->y++;
    }
  return (NULL);
}
