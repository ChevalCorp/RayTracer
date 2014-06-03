/*
** init_spot.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:25:12 2014 Olivier Remy
** Last update Mon Jun  2 18:28:38 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_spot		*init_spot(t_cord *cord, int c)
{
  t_spot	*spot;

  spot = c_malloc(sizeof(t_spot));
  spot->cord = cord;
  spot->color = c;
  return (spot);
}
