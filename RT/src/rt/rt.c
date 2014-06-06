/*
** rt.c for rt in /home/lautel_m/rendu/MUL_2013_rtv1
**
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
**
** Started on  Mon Feb 24 11:24:55 2014 marc-aurele lautel
** Last update Fri Jun  6 09:32:22 2014 Olivier Remy
*/

#include	"funcrt.h"

int		rt(t_map *map)
{
  t_rt		*rt;

  rt = c_malloc(sizeof(t_rt));
  rt_initialisation(rt, map);
  start_rt(rt);
  return (0);
}
