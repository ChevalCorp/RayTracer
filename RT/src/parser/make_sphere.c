/*
** make_sphere.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 20:10:27 2014 Olivier Remy
** Last update Sun Jun  8 21:02:04 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_sphere(t_list *list)
{
  t_cord	*rot;
  t_elem	*elem;
  t_sphere	*sphere;
  t_cord	*cord;

  if (list->length != 8)
    c_puterror("mauvais nombre d'arguments pour une sphere");
  cord = init_cord(c_getnbr(chose_elem(list, 1)),
		   c_getnbr(chose_elem(list, 2)),
		   c_getnbr(chose_elem(list, 3)));
  rot = init_cord(c_getnbr(chose_elem(list, 4)),
		  c_getnbr(chose_elem(list, 5)),
		  c_getnbr(chose_elem(list, 6)));
  sphere = init_sphere(cord, rot,
		       c_getnbr(chose_elem(list, 7)),
		       c_getnbr(chose_elem(list, 8)));
  elem = init_elem(sphere);
  elem->token = SPHERE;
  return (elem);
}
