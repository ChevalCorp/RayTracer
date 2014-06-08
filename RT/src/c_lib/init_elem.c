/*
** init_elem.c for init_elem.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 29 19:04:16 2014 Olivier Remy
** Last update Thu May 29 20:47:19 2014 Olivier Remy
*/

#include	"langc.h"

t_elem		*init_elem(void *av)
{
  t_elem	*elem;

  elem = c_malloc(sizeof(t_elem));
  elem->token = 0;
  elem->data = av;
  elem->next = NULL;
  elem->prev = NULL;
  return (elem);
}
