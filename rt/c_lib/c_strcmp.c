/*
** c_strcmp.c for c_strcmp.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 16 16:08:39 2014 Olivier Remy
** Last update Wed Apr 16 17:56:43 2014 Olivier Remy
*/

#include	"langc.h"

int		c_strcmp(char *str, char *cmp)
{
  int		n;
  int		diff;

  n = -1;
  diff = 0;
  if (str == NULL)
    c_puterror("str is empty in c_strcmp");
  if (cmp == NULL)
    c_puterror("cmp is empty in c_strcmp");
  while (str[++n] != '\0')
    {
      if (str[n] != cmp[n])
	diff++;
    }
  if (str[n] != cmp[n])
    diff++;
  return (diff);
}
