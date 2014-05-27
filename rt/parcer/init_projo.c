/*
** init_projo.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 19:16:54 2014 Olivier Remy
** Last update Mon May 26 19:18:09 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_projo		*init_projo(t_cord *cord, int c)
{
  t_projo	*projo;

  projo = c_malloc(sizeof(t_projo));
  projo->cord = cord;
  projo->color = c;
  return (projo);
}
