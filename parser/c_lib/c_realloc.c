/*
** c_realloc.c for c_realloc.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 16 21:44:25 2014 Olivier Remy
** Last update Thu Apr 24 13:48:09 2014 Olivier Remy
*/

#include	"langc.h"

void		*c_realloc(void *str, size_t size)
{
  void		*ptr;

  ptr = c_malloc(size);
  ptr = c_strcpy(str, ptr, '\0');
  free(str);
  return (ptr);
}
