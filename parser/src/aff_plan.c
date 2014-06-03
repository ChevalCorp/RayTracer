/*
** aff_plan.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 17:54:12 2014 Olivier Remy
** Last update Tue Jun  3 18:23:30 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_plan(t_elem *elem)
{
  t_plan	*plan;

  plan = elem->data;
  c_putstr("Plan\n");
  aff_cord(plan->cord);
  c_putstr("color : ");
  c_putnbr(plan->color);
}
