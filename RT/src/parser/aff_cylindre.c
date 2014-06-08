/*
** aff_cylindre.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 17:37:21 2014 Olivier Remy
** Last update Tue Jun  3 18:23:15 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_cylindre(t_elem *elem)
{
  t_cylindre	*cylindre;

  cylindre = elem->data;
  c_putstr("Cylindre\n");
  aff_cord(cylindre->cord);
  c_putstr("rayon : ");
  c_putnbr(cylindre->rayon);
  c_putstr("\nsize : ");
  c_putnbr(cylindre->size);
  c_putstr("\ncolor : ");
  c_putnbr(cylindre->color);
}
