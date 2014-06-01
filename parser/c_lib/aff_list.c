/*
** aff_list.c for aff_list.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 30 14:01:09 2014 Olivier Remy
** Last update Sun May 11 07:57:41 2014 Olivier Remy
*/

#include	"langc.h"

void		aff_list(t_list *list)
{
  t_elem	*tmp;

  tmp = list->first;
  while (tmp != NULL)
    {
      c_putstr(tmp->data);
      c_putchar('\n');
      tmp = tmp->next;
    }
}
