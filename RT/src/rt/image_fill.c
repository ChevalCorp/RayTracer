/*
** image_fill.c for rt in /home/lautel_m/rendu/MUL_2013_rtv1
**
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
**
** Started on  Tue Feb 25 14:41:02 2014 marc-aurele lautel
** Last update Fri Jun  6 14:53:43 2014 Olivier Remy
*/

#include	"rtv1.h"

void		image_fill(t_rt *rt)
{
  pthread_t	pt_1;
  pthread_t	pt_2;
  pthread_t	pt_3;
  pthread_t	pt_4;
  t_regionrtv1	*region;

  rt->sbe->data = mlx_get_data_addr(rt->mlx->img_ptr, &rt->sbe->bpp,
				    &rt->sbe->sizeline, &rt->sbe->endian);
  region = make_region(rt, 0, (rt->win->winy / 4));
  pthread_create(&pt_1, NULL, &(threading_part), (void *)region);
  region = make_region(rt, (rt->win->winx / 3),
		       (rt->win->winy / 2));
  pthread_create(&pt_2, NULL, &(threading_part), (void *)region);
  region = make_region(rt, (rt->win->winy - (rt->win->winy / 3)),
		       (rt->win->winy - (rt->win->winy / 4)));
  pthread_create(&pt_3, NULL, &(threading_part), (void *)region);
  region = make_region(rt, rt->win->winx, rt->win->winy);
  pthread_create(&pt_4, NULL, &(threading_part), (void *)region);
  pthread_join(pt_1, NULL);
  pthread_join(pt_2, NULL);
  pthread_join(pt_3, NULL);
  pthread_join(pt_4, NULL);
  mlx_put_image_to_window(rt->mlx->mlx_ptr,
			  rt->mlx->win_ptr, rt->mlx->img_ptr, 0, 0);
}
