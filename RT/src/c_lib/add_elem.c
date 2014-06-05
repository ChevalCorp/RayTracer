/*
** add_elem.c for add_elem.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 29 19:17:41 2014 Olivier Remy
** Last update Wed Apr 30 14:02:58 2014 Olivier Remy
*/

#include	"langc.h"

void		add_elem(t_list *list, t_elem *elem)
{
  if (list->length == 0)
    {
      list->first = elem;
      list->last = elem;
      list->length++;
      return ;
    }
  elem->prev = list->last;
  list->last->next = elem;
  list->last = elem;
  list->length++;
}
