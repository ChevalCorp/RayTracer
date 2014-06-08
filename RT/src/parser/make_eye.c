/*
** make_eye.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed May 28 15:53:21 2014 Olivier Remy
** Last update Sun Jun  8 20:59:50 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_eye		*make_eye(t_list *list, t_map *map)
{
  t_cord	*rot;
  t_eye		*eye;
  t_cord	*cord;

  if (map->eye != NULL)
    c_puterror("un seul oeil par map est autorisé");
  if (list->length != 6)
    c_puterror("mauvais nombre d'arguments pour l'oeil");
  cord = init_cord(c_getnbr(chose_elem(list, 1)),
		   c_getnbr(chose_elem(list, 2)),
		   c_getnbr(chose_elem(list, 3)));
  rot = init_cord(c_getnbr(chose_elem(list, 4)),
		  c_getnbr(chose_elem(list, 5)),
		  c_getnbr(chose_elem(list, 6)));
  eye = init_eye(cord, rot);
  return (eye);
}
