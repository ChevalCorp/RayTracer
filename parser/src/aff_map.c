/*
** aff_map.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:29:00 2014 Olivier Remy
** Last update Tue Jun  3 16:52:28 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_map(t_map *map)
{
  t_elem	*obj;

  obj = map->obj->first;
  aff_eye(map->eye);
  c_putchar('\n');
  while (obj != NULL)
    {
      aff_obj(obj);
      obj = obj->next;
    }
}
