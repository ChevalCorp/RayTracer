/*
** get_dot.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 16:09:09 2014 Olivier Remy
** Last update Thu Jun  5 16:09:33 2014 Olivier Remy
*/

#include	"funcrt.h"

t_dot		get_dot(int x, int y)
{
  t_dot		dot;

  dot.x = x;
  dot.y = y;
  return (dot);
}
