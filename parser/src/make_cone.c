/*
** make_cone.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 20:33:51 2014 Olivier Remy
** Last update Tue Jun  3 17:10:38 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_cone(t_list *list)
{
  t_cord	*cord;
  t_elem	*elem;
  t_cone	*cone;

  if (list->length != 6)
    c_puterror("mauvais nombre d'arguments pour un cone");
  cord = init_cord(c_getnbr(list->first->data),
                   c_getnbr(list->first->next->data),
                   c_getnbr(list->first->next->next->data));
  cone = init_cone(cord,
		     c_getnbr(list->last->prev->prev->data),
		     c_getnbr(list->last->prev->data),
		     c_getnbr(list->last->data));
  elem = init_elem(cone);
  elem->token = CONE;
  return (elem);
}
