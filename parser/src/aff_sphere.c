/*
** aff_sphere.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:29:10 2014 Olivier Remy
** Last update Mon Jun  2 17:53:52 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_sphere(t_elem *elem)
{
  t_sphere	*sphere;

  sphere = elem->data;
  c_putstr("Sphere\n");
  aff_cord(sphere->cord);
  c_putstr("rayon : ");
  c_putnbr(sphere->rayon);
  c_putstr("\ncolor : ");
  c_putnbr(sphere->color);
}
