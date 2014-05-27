/*
** init_map.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 19:30:44 2014 Olivier Remy
** Last update Mon May 26 19:34:46 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_map		*init_map(t_eye *eye)
{
  t_map		*map;

  map = c_malloc(sizeof(t_map));
  map->eye = eye;
  map->obj = init_list();
  return (map);
}
