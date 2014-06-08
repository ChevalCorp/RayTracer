/*
** init_cone.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 19:08:52 2014 Olivier Remy
** Last update Sun Jun  8 20:20:16 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_cone		*init_cone(t_cord *cord, t_cord *rot, int r, int s, int c)
{
  t_cone	*cone;

  cone = c_malloc(sizeof(t_cone));
  cone->rot = rot;
  cone->cord = cord;
  cone->rayon = r;
  cone->size = s;
  cone->color = c;
  return (cone);
}
