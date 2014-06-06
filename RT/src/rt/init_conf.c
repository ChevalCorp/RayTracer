/*
** init_conf.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 16:03:17 2014 Olivier Remy
** Last update Thu Jun  5 16:03:51 2014 Olivier Remy
*/

#include	"funcrt.h"

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
