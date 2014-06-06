/*
** start_rt.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 15:50:41 2014 Olivier Remy
** Last update Fri Jun  6 11:39:01 2014 Olivier Remy
*/

#include	"funcrt.h"

void		start_rt(t_rt *rt)
{
  if ((rt->mlx->mlx_ptr = mlx_init()) == NULL)
    exit(1);
  rt->mlx->img_ptr = mlx_new_image(rt->mlx->mlx_ptr,
                                   rt->mlx->imgx, rt->mlx->imgy);
  rt->mlx->win_ptr = mlx_new_window(rt->mlx->mlx_ptr,
                                    rt->win->winx, rt->win->winy, "RT-V\
1");
  mlx_key_hook(rt->mlx->win_ptr, gere_key, rt);
  mlx_loop(rt->mlx->mlx_ptr);
}
