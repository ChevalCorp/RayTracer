/*
** rt_init.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 16:04:16 2014 Olivier Remy
** Last update Fri Jun  6 12:56:46 2014 Olivier Remy
*/

#include	"funcrt.h"

void		rt_initialisation(t_rt *rt, t_map *map)
{
  rt->win = map->win;
  rt->eye = map->eye;
  rt->obj = map->obj;
  rt->pxl = c_malloc(sizeof(t_dot));
  rt->mlx = c_malloc(sizeof(t_mlx));
  rt->sbe = c_malloc(sizeof(t_sbe));
  rt->mlx->imgx = map->win->winx;
  rt->mlx->imgy = map->win->winy;
  pthread_mutex_init(&rt->mutex_lock, NULL);
}
