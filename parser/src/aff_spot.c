/*
** aff_spot.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:03:04 2014 Olivier Remy
** Last update Sun Jun  8 19:40:31 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_spot(t_list *spots)
{
  t_elem	*elem;
  t_spot	*spot;

  elem = spots->first;
  while (elem != NULL)
    {
      spot = elem->data;
      c_putstr("Spot\n");
      aff_cord(spot->cord);
      c_putstr("color : ");
      c_putnbr(spot->color);
      elem = elem->next;
    }
}
