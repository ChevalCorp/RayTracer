/*
** init_eye.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 19:27:19 2014 Olivier Remy
** Last update Sun Jun  8 20:47:28 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_eye		*init_eye(t_cord *cord, t_cord *rot)
{
  t_eye		*eye;

  eye = c_malloc(sizeof(t_eye));
  eye->cord = cord;
  eye->rot = rot;
  return (eye);
}
