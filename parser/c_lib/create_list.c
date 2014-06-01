/*
** create_list.c for create_list.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 30 14:04:36 2014 Olivier Remy
** Last update Wed Apr 30 14:13:56 2014 Olivier Remy
*/

#include	"langc.h"

t_list		*create_list(char **av)
{
  t_list	*list;
  t_elem	*elem;
  int		n;

  n = -1;
  list = init_list();
  while (av[++n] != NULL)
    {
      elem = init_elem(av[n]);
      add_elem(list, elem);
    }
  return (list);
}
