/*
** make_spot.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:24:18 2014 Olivier Remy
** Last update Sun Jun  8 21:01:22 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_spot(t_list *list)
{
  t_cord	*rot;
  t_elem	*elem;
  t_cord	*cord;
  t_spot	*spot;

  if (list->length != 7)
    c_puterror("mauvais nombre d'arguments pour un projo");
  cord = init_cord(c_getnbr(chose_elem(list, 1)),
		   c_getnbr(chose_elem(list, 2)),
		   c_getnbr(chose_elem(list, 3)));
  rot = init_cord(c_getnbr(chose_elem(list, 4)),
		  c_getnbr(chose_elem(list, 5)),
		  c_getnbr(chose_elem(list, 6)));
  spot = init_spot(cord, rot,
		   c_getnbr(chose_elem(list, 7)));
  elem = init_elem(spot);
  elem->token = SPOT;
  return (elem);
}
