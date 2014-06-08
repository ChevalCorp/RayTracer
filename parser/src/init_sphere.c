/*
** init_sphere.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 18:49:01 2014 Olivier Remy
** Last update Sun Jun  8 20:40:46 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_sphere	*init_sphere(t_cord *cord, t_cord *rot, int r, int c)
{
  t_sphere	*sphere;

  sphere = c_malloc(sizeof(t_sphere));
  sphere->rot = rot;
  sphere->cord = cord;
  sphere->rayon = r;
  sphere->color = c;
  return (sphere);
}
