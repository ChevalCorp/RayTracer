/*
** str_to_linelist.c for c_lib in /home/remy_o/rendu/epic_js_fantasy/c_lib
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 05:36:59 2014 Olivier Remy
** Last update Sun May 11 05:37:02 2014 Olivier Remy
*/

#include	"langc.h"

t_list		*str_to_linelist(const int fd)
{
  t_list	*list;
  char		*tmp;

  list = init_list();
  while ((tmp = c_getnextline(fd)) != NULL)
    add_elem(list, init_elem(tmp));
  return (list);
}
