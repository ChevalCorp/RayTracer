/*
** c_malloc.c for c_malloc.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Wed Apr 16 18:31:54 2014 Olivier Remy
** Last update Wed Apr 16 21:03:41 2014 Olivier Remy
*/

#include	"langc.h"

void		*c_malloc(size_t size)
{
  void		*ptr;

  ptr = malloc(size);
  if (ptr == NULL)
    c_puterror("size is empty in c_malloc");
  return (ptr);
}
