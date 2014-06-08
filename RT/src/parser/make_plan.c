/*
** make_plan.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu May 29 19:20:42 2014 Olivier Remy
** Last update Sun Jun  8 21:00:26 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_plan(t_list *list)
{
  t_cord	*rot;
  t_elem	*elem;
  t_cord	*cord;
  t_plan	*plan;

  if (list->length != 7)
    c_puterror("mauvais nombre d'arguments pour un plan");
  cord = init_cord(c_getnbr(chose_elem(list, 1)),
		   c_getnbr(chose_elem(list, 2)),
		   c_getnbr(chose_elem(list, 3)));
  rot = init_cord(c_getnbr(chose_elem(list, 4)),
		  c_getnbr(chose_elem(list, 5)),
		  c_getnbr(chose_elem(list, 6)));
  plan = init_plan(cord, rot,
		   c_getnbr(chose_elem(list, 7)));
  elem = init_elem(plan);
  elem->token = PLAN;
  return (elem);
}
