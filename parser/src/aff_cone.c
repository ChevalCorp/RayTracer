/*
** aff_cone.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:31:51 2014 Olivier Remy
** Last update Mon Jun  2 18:02:28 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_cone(t_elem *elem)
{
  t_cone	*cone;

  cone = elem->data;
  c_putstr("Cone\n");
  aff_cord(cone->cord);
  c_putstr("rayon : ");
  c_putnbr(cone->rayon);
  c_putstr("\nsize : ");
  c_putnbr(cone->size);
  c_putstr("\ncolor : ");
  c_putnbr(cone->color);
}
