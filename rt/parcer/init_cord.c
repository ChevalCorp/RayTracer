/*
** init_cord.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 18:47:00 2014 Olivier Remy
** Last update Mon May 26 19:55:47 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_cord		*init_cord(int x, int y, int z)
{
  t_cord	*cord;

  cord = c_malloc(sizeof(t_cord));
  cord->pos_x = x;
  cord->pos_y = y;
  cord->pos_z = z;
  return (cord);
}
