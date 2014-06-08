/*
** make_spot.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:24:18 2014 Olivier Remy
** Last update Tue Jun  3 17:12:23 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_spot(t_list *list)
{
  t_elem	*elem;
  t_cord	*cord;
  t_spot	*spot;

  if (list->length != 4)
    c_puterror("mauvais nombre d'arguments pour un projo");
  cord = init_cord(c_getnbr(list->first->data),
		   c_getnbr(list->first->next->data),
		   c_getnbr(list->first->next->next->data));
  spot = init_spot(cord, c_getnbr(list->last->data));
  elem = init_elem(spot);
  elem->token = SPOT;
  return (elem);
}
