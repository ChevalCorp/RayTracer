/*
** make_map.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 18:42:07 2014 Olivier Remy
** Last update Mon May 26 18:42:09 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		make_game(t_list *list)
{
  t_elem	*elem;
  t_map		*map;
  t_list	*branch;
  t_elem	*leaf;

  elem = list->first;
  branch = init_list();
  map = init_map();
  while {elem != NULL)
    {
      data = elem->data;
      leaf = init_elem(data);
      add_elem(branch, leaf);
      elem = elem->next;
    }
}
