/*
** my_parc.c for my_parc.c in /home/remy_o/rendu/sudoki-bi
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sat Mar  1 14:07:15 2014 Olivier Remy
** Last update Tue Jun  3 18:47:22 2014 Olivier Remy
*/

#include	"langc.h"

char            *c_getnextline(const int fd, char c)
{
  int		 i;
  char		buff;
  char		*ptr;

  ptr = c_malloc(sizeof(char) * 1);
  ptr[0] = '\0';
  i = 0;
  if (read(fd, &buff, 1) != 1)
    return (NULL);
  ptr = c_realloc(ptr, sizeof(char) * (c_strlen(ptr, '\0') + 2));
  ptr[i++] = buff;
  ptr[i] = '\0';
  while (read(fd, &buff, 1) == 1 && buff != '\n' && buff != c)
    {
      ptr = c_realloc(ptr, sizeof(char) * (c_strlen(ptr, '\0') + 2));
      ptr[i++] = buff;
      ptr[i] = '\0';
    }
  return (ptr);
}
