/*
** aff_eye.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:05:45 2014 Olivier Remy
** Last update Mon Jun  2 17:51:05 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_eye(t_eye *eye)
{
  c_putstr("Eye\n");
  aff_cord(eye->cord);
  c_putstr("angle : ");
  c_putnbr(eye->angl);
}
