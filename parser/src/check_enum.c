/*
** check_enum.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Fri May 30 08:41:04 2014 Olivier Remy
** Last update Mon Jun  2 14:48:18 2014 Antoine Favarel
*/

#include	"epic_editor.h"

void		check_enum(t_elem *elem, t_map *map)
{
  int		n;
  char		*data;
  t_elem	*leaf;
  t_key		*key;
  t_list	*branch;

  n = -1;
  key = init_enum();
  data = elem->data;
  while (++n <= 5)
    if (c_strequal(key[n].key, data) == 1)
      {
	printf("%s\n", key[n]);
       	c_putnbr(n);
	c_putchar('/');
        branch = split_list(elem);
	if (c_strequal(data, "Eye") == 1)
	  {
	    map->eye = make_eye(branch);
	    return ;
	  }
	else
	  {
	    leaf = (key[n].func)(branch);
	    add_elem(map->obj, leaf);
	    return ;
	  }
      }
}
