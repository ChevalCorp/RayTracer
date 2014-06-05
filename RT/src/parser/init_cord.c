/*
** init_cord.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 18:47:00 2014 Olivier Remy
** Last update Sat May 31 23:23:42 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_cord		*init_cord(double x, double y, double z)
{
  t_cord	*cord;

  cord = c_malloc(sizeof(t_cord));
  cord->pos_x = x;
  cord->pos_y = y;
  cord->pos_z = z;
  return (cord);
}
