/*
** make_cylindre.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu May 29 19:13:09 2014 Olivier Remy
** Last update Sun Jun  8 20:58:51 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_cylindre(t_list *list)
{
  t_cord	*rot;
  t_elem	*elem;
  t_cylindre	*cylindre;
  t_cord	*cord;

  if (list->length != 9)
    c_puterror("mauvais nombre d'arguments pour un cylindre");
  cord = init_cord(c_getnbr(chose_elem(list, 1)),
		   c_getnbr(chose_elem(list, 2)),
		   c_getnbr(chose_elem(list, 3)));
  rot = init_cord(c_getnbr(chose_elem(list, 4)),
		  c_getnbr(chose_elem(list, 5)),
		  c_getnbr(chose_elem(list, 6)));
  cylindre = init_cylindre(cord, rot,
			   c_getnbr(chose_elem(list, 7)),
			   c_getnbr(chose_elem(list, 8)),
			   c_getnbr(chose_elem(list, 9)));
  elem = init_elem(cylindre);
  elem->token = CYLINDRE;
  return (elem);
}
