/*
** str_to_linelist.c for c_lib in /home/remy_o/rendu/epic_js_fantasy/c_lib
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 05:36:59 2014 Olivier Remy
** Last update Tue Jun  3 19:26:42 2014 Olivier Remy
*/

#include	"langc.h"

static void		check_char(char *tmp, char c)
{
  int		n;

  n = -1;
  if (tmp[0] = '\0')
    c_puterror("fichier lu corrompu");
  while (tmp[++n] != '\0')
    if (tmp[n] == c || tmp[n] == '\n')
      c_puterror("fichier lu corrompu");
}

t_list		*str_to_linelist(const int fd, char c)
{
  t_list	*list;
  char		*tmp;

  list = init_list();
  while ((tmp = c_getnextline(fd, c)) != NULL)
    {
      check_char(tmp, c);
      add_elem(list, init_elem(tmp));
    }
  return (list);
}
