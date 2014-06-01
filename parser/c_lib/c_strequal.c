/*
** c_strequal.c for c_strequal.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 16 16:26:07 2014 Olivier Remy
** Last update Wed Apr 16 17:57:57 2014 Olivier Remy
*/

#include	"langc.h"

int		c_strequal(char *str, char *cmp)
{
  if (str == NULL)
    c_puterror("str is empty in c_strequal");
  if (cmp == NULL)
    c_puterror("cmp is empty in c_strequal");
  if (c_strcmp(str, cmp) == 0)
    return (1);
  else
    return (-1);
}
