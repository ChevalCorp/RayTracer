/*
** make_cone.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 20:33:51 2014 Olivier Remy
** Last update Sun Jun  8 20:57:59 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_cone(t_list *list)
{
  t_cord	*rot;
  t_cord	*cord;
  t_elem	*elem;
  t_cone	*cone;
  char		*tmp;

  if (list->length != 9)
    c_puterror("mauvais nombre d'arguments pour un cone");
  cord = init_cord(c_getnbr(chose_elem(list, 1)),
                   c_getnbr(chose_elem(list, 2)),
		   c_getnbr(chose_elem(list, 3)));
  rot = init_cord(c_getnbr(chose_elem(list, 4)),
		  c_getnbr(chose_elem(list, 5)),
		  c_getnbr(chose_elem(list, 6)));
  cone = init_cone(cord, rot,
		   c_getnbr(chose_elem(list, 7)),
		   c_getnbr(chose_elem(list, 8)),
		   c_getnbr(chose_elem(list, 9)));
  elem = init_elem(cone);
  elem->token = CONE;
  return (elem);
}
