/*
** pixel_func.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
**
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
**
** Started on  Tue Feb 25 14:06:57 2014 marc-aurele lautel
** Last update Thu Jun  5 16:34:17 2014 Olivier Remy
*/

#include	"funcrt.h"

void		put_pixel_to_img(char *data, t_dot dot, t_color color,
				 int sizeline)
{
  int		i;

  i = dot.x * 4 + sizeline * dot.y;
  data[i] = color.b;
  data[i + 1] = color.v;
  data[i + 2] = color.r;
}
