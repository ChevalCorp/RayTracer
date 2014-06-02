/*
** make_plan.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu May 29 19:20:42 2014 Olivier Remy
** Last update Mon Jun  2 14:05:36 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_plan(t_list *list)
{
  t_elem	*elem;
  t_cord	*cord;
  t_plan	*plan;

  if (list->length != 4)
    c_puterror("mauvais nombre d'arguments pour un plan");
  cord = init_cord(c_getnbr(list->first->next->data),
		   c_getnbr(list->first->next->next->data),
		   c_getnbr(list->first->next->next->next->data));
  plan = init_plan(cord, c_getnbr(list->last->data));
  elem = init_elem(plan);
  elem->token = PLAN;
  return (elem);
}
