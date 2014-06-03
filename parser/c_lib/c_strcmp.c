/*
** c_strcmp.c for c_strcmp.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 16 16:08:39 2014 Olivier Remy
** Last update Mon Jun  2 16:14:23 2014 Olivier Remy
*/

#include	"langc.h"

int		c_strcmp(char *str, char *cmp)
{
  int		n;
  int		diff;

  n = -1;
  diff = 0;
  while (str[++n] && cmp[n])
    diff += (str[n] != cmp[n]);
  return (diff);
}
