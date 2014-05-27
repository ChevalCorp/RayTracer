/*
** make_sphere.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 20:10:27 2014 Olivier Remy
** Last update Mon May 26 20:23:21 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_sphere(t_list *list)
{
  t_elem	*elem;
  t_sphere	*sphere;
  t_cord	*cord;

  cord = init_cord(c_getnbr(list->first->data),
		   c_getnbr(list->first->next->data),
		   c_getnbr(list->first->next->next->data));
  sphere = init_sphere(cord,
		       c_getnbr(list->last->prev->data),
		       c_getnbr(list->last->data));
  elem = init_elem(sphere);
  return (elem);
}
