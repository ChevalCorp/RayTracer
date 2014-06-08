/*
** c_wristr.c for c_lib in /home/remy_o/rendu/epic_js_fantasy
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue May 13 14:13:41 2014 Olivier Remy
** Last update Tue May 13 14:15:34 2014 Olivier Remy
*/

#include	"langc.h"

void		c_wristr(char *str, const int fd)
{
  int		n;

  n = -1;
  while (str[++n] != '\0')
    c_wrichar(str[n], fd);
}
