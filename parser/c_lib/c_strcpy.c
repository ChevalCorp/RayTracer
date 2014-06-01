/*
** c_strcpy.c for c_strcpy.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 16 19:15:15 2014 Olivier Remy
** Last update Thu Apr 24 13:20:26 2014 Olivier Remy
*/

#include	"langc.h"

char		*c_strcpy(char *src, char *cpy, char c)
{
  int		n;

  n = -1;
  if (src == NULL)
    c_puterror("src is empty in c_strcpy");
  if (sizeof(src) < sizeof(cpy))
    c_puterror("cpy hasn't the good size");
  while (src[++n] != c)
    cpy[n] = src[n];
  cpy[n] = '\0';
  return (cpy);
}
