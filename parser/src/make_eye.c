/*
** make_eye.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed May 28 15:53:21 2014 Olivier Remy
** Last update Mon Jun  2 17:29:13 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_eye		*make_eye(t_list *list)
{
  t_eye		*eye;
  t_cord	*cord;

  if (list->length != 4)
    c_puterror("mauvais nombre d'arguments pour l'oeil");
  cord = init_cord(c_getnbr(list->first->next->data),
		   c_getnbr(list->first->next->next->data),
		   c_getnbr(list->first->next->next->next->data));
  eye = init_eye(cord,
		 c_getnbr(list->last->data));
  return (eye);
}
