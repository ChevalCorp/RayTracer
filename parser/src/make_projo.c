/*
** make_projo.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu May 29 19:28:55 2014 Olivier Remy
** Last update Sun Jun  1 02:15:35 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_projo(t_list *list)
{
  t_elem	*elem;
  t_cord	*cord;
  t_projo	*projo;

  if (list->length != 5)
    c_puterror("mauvais nombre d'arguments pour un projo");
  cord = init_cord(c_getnbr(list->first->next->data),
		   c_getnbr(list->first->next->next->data),
		   c_getnbr(list->first->next->next->next->data));
  projo = init_projo(cord, c_getnbr(list->last->data));
  elem = init_elem(projo);
  elem->token = PROJO;
  return (elem);
}
