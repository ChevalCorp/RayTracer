/*
** aff_cord.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:03:48 2014 Olivier Remy
** Last update Mon Jun  2 17:48:53 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_cord(t_cord *cord)
{
  c_putstr("cord : ");
  c_putnbr(cord->pos_x);
  c_putstr(", ");
  c_putnbr(cord->pos_y);
  c_putstr(", ");
  c_putnbr(cord->pos_z);
  c_putchar('\n');
}
