/*
** free_list.c for free_list.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 30 14:22:53 2014 Olivier Remy
** Last update Wed Apr 30 14:33:14 2014 Olivier Remy
*/

#include	"langc.h"

void		free_list(t_list *list)
{
  t_elem	*elem;

  elem = list->first;
  while (elem->next != NULL)
    {
      free(elem->prev);
      elem = elem->next;
    }
  free(elem->next);
  free(list);
}
