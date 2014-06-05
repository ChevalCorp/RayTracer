/*
** c_putstr.c for c_putstr.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Apr 14 22:27:55 2014 Olivier Remy
** Last update Tue Apr 15 17:28:32 2014 Olivier Remy
*/

#include	"langc.h"

void		c_putstr(char *str)
{
  int		n;

  n = -1;
  if (str == NULL)
    c_puterror("string is empty in c_putstr");
  while (str[++n] != '\0')
    c_putchar(str[n]);
}
