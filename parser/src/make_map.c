/*
** make_map.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 18:42:07 2014 Olivier Remy
** Last update Mon Jun  2 12:03:40 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_map		*make_map(t_list *list)
{
  char		*data;
  t_elem	*elem;
  t_map		*map;

  elem = list->first;
  map = init_map();
  if (c_strequal((data = elem->data), "Eye") == 0)
    c_puterror("La première ligne du fichier de conf doit-être l'oeil");
  while (elem != NULL)
    {
      check_enum(elem, map);
      elem = elem->next;
    }
  return (map);
}
