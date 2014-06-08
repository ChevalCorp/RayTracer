/*
** check_enum.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Fri May 30 08:41:04 2014 Olivier Remy
** Last update Sun Jun  8 19:20:33 2014 Olivier Remy
*/

#include	"epic_editor.h"

static void		check_list(t_map *map, t_key *key, char *data, int n, t_elem *elem)
{
  t_elem	*leaf;
  t_list	*branch;

  if (c_strequal(key[n].key, data) == 1)
    {
      branch = split_list(elem);
      if (c_strequal(data, "Eye") == 1)
	map->eye = make_eye(branch, map);
      else
	{
	  leaf = (key[n].func)(branch);
	  if (c_strequal(data, "Spot") == 1)
	    add_elem(map->spot, leaf);
	  else
	    add_elem(map->obj, leaf);
	  free(branch);
	}
    }
}

void		check_enum(t_elem *elem, t_map *map)
{
  int		n;
  char		*data;
  t_key		*key;
  t_list	*branch;

  n = -1;
  key = init_enum();
  data = elem->data;
  while (++n <= 5)
    check_list(map, key, data, n, elem);
  free(key);
}
