/*
** make_cylindre.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu May 29 19:13:09 2014 Olivier Remy
** Last update Tue Jun  3 17:10:57 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_elem		*make_cylindre(t_list *list)
{
  t_elem	*elem;
  t_cylindre	*cylindre;
  t_cord	*cord;

  if (list->length != 6)
    c_puterror("mauvais nombre d'arguments pour un cylindre");
  cord = init_cord(c_getnbr(list->first->data),
		   c_getnbr(list->first->next->data),
		   c_getnbr(list->first->next->next->data));
  cylindre = init_cylindre(cord,
			   c_getnbr(list->last->prev->prev->data),
			   c_getnbr(list->last->prev->data),
			   c_getnbr(list->last->data));
  elem = init_elem(cylindre);
  elem->token = CYLINDRE;
  return (elem);
}
