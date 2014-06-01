/*
** init_elem.c for init_elem.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 29 19:04:16 2014 Olivier Remy
** Last update Sun May 11 06:01:44 2014 Olivier Remy
*/

#include	"langc.h"

t_elem		*init_elem(void *av)
{
  t_elem	*elem;

  elem = c_malloc(sizeof(t_elem));
  elem->data = av;
  elem->next = NULL;
  elem->prev = NULL;
  return (elem);
}
