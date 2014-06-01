/*
** init_list.c for init_list.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 29 18:54:28 2014 Olivier Remy
** Last update Sun May 11 06:50:02 2014 Olivier Remy
*/

#include	"langc.h"

t_list		*init_list()
{
  t_list	*list;

  list = c_malloc(sizeof(t_list));
  list->first = NULL;
  list->last = NULL;
  list->length = 0;
  return (list);
}
