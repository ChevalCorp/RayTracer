/*
** c_strdump.c for c_strdump.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Apr 24 13:05:00 2014 Olivier Remy
** Last update Thu Apr 24 13:10:57 2014 Olivier Remy
*/

#include	"langc.h"

char		*c_strdump(char *src, char c)
{
  int		n;
  char		*cpy;

  n = -1;
  if (src == NULL)
    c_puterror("src is empty in c_strcpy");
  cpy = c_malloc(sizeof(src));
  while (src[++n] != c)
    cpy[n] = src[n];
  cpy[n] = '\0';
  return (cpy);
}
