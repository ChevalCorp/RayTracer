/*
** split_list.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sat May 31 22:52:51 2014 Olivier Remy
** Last update Tue Jun  3 16:44:56 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_list		*split_list(t_elem *elem)
{
  int		n;
  char		*data;
  t_key		*key;
  t_list	*branch;
  t_elem	*leaf;

  key = init_enum();
  branch = init_list();
  elem = elem->next;
  while (elem != NULL)
    {
      n = -1;
      data = elem->data;
      elem = elem->next;
      while (++n <= 5)
	if (c_strequal(key[n].key, data) == 1)
	  return (branch);
      leaf = init_elem(data);
      add_elem(branch, leaf);
    }
  return (branch);
}
