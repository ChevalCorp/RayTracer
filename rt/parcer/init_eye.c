/*
** init_eye.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 19:27:19 2014 Olivier Remy
** Last update Mon May 26 19:29:38 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_eye		*init_eye(t_cord *cord, float angl)
{
  t_eye		*eye;

  eye = c_malloc(sizeof(t_eye));
  eye->cord = cord;
  eye->angl = angl;
  return (eye);
}
