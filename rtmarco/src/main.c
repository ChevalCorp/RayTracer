/*
** main.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Mon Feb 24 11:24:55 2014 marc-aurele lautel
** Last update Sun Jun  1 20:44:21 2014 Antoine Favarel
*/

#include	"rtv1.h"

/*
init_conf() va lire le ficher conf.cf et stocker les different obj dans t_rtv1;
start_rt() lance le calcule des couleur par pixel.
*/
void		start_rt(t_rtv1 *rt)
{
  if ((rt->img->mlx_ptr = mlx_init()) == NULL)
    exit(1);
  rt->img->img_ptr = mlx_new_image(rt->img->mlx_ptr,
                                   rt->img->imgx, rt->img->imgy);
  rt->img->win_ptr = mlx_new_window(rt->img->mlx_ptr,
                                    rt->win->winx, rt->win->winy, "RT-V1");
  mlx_key_hook(rt->img->win_ptr, gere_key, rt);
  mlx_loop(rt->img->mlx_ptr);
}

void		init_conf(t_rtv1 *rt, int ac, char **av)
{
  int		fd;
  char		*newline;

  if (ac < 1 && ac > 2)
    exit(1);
  if ((fd = open(av[1], O_RDONLY)) == -1)
    exit(1);
  while ((newline = read_line(fd)))
    {
      if (my_strcmp("##", newline) == 1)
	addlast(rt);
    }
  close(fd);
  if ((fd = open(av[1], O_RDONLY)) == -1)
    exit(1);
  set_obj(rt, fd);
  close(fd);
}

void		rt_initialisation(t_rtv1 *rt)
{
  rt->win = malloc(sizeof(t_win));
  rt->img = malloc(sizeof(t_img));
  rt->sbe = malloc(sizeof(t_sbe));
  rt->eye = malloc(sizeof(t_eye));
  rt->start = NULL;
  rt->end = NULL;
  rt->lenght = 0;
  rt->win->winx = 700;
  rt->win->winy = 800;
  rt->img->imgx = 700;
  rt->img->imgy = 800;
  pthread_mutex_init(&rt->mutex_lock, NULL);
}

int		main(int ac, char **av)
{
  t_rtv1	*rt;

  rt = malloc(sizeof(t_rtv1));
  rt_initialisation(rt);
  init_conf(rt, ac, av);
  start_rt(rt);
  return (0);
}
