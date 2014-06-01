/*
** init_plan.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 19:15:21 2014 Olivier Remy
** Last update Mon May 26 19:16:39 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_plan		*init_plan(t_cord *cord, int c)
{
  t_plan	*plan;

  plan = c_malloc(sizeof(t_plan));
  plan->cord = cord;
  plan->color = c;
  return (plan);
}
