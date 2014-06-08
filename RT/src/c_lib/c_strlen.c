/*
** c_strlen.c for c_strlen.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 15 16:25:01 2014 Olivier Remy
** Last update Tue Apr 15 17:00:59 2014 Olivier Remy
*/

#include	"langc.h"

int		c_strlen(char *str, char c)
{
  int		n;

  n = 0;
  if (str == NULL)
    c_puterror("string is empty in c_strlen");
  while (str[n] != c)
    n++;
  return (n);
}
