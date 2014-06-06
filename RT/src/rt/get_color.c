/*
** get_color.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 16:33:20 2014 Olivier Remy
** Last update Thu Jun  5 16:34:00 2014 Olivier Remy
*/

#include	"funcrt.h"

t_color		get_color(int r, int v, int b)
{
  t_color	color;

  color.r = r;
  color.v = v;
  color.b = b;
  return (color);
}
