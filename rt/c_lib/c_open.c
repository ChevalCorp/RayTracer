/*
** c_open.c for c_openread.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Apr 24 16:45:52 2014 Olivier Remy
** Last update Mon Apr 28 10:33:35 2014 Olivier Remy
*/

#include	"langc.h"

int		c_open(const char *pathname, int flags)
{
  int		fd;

  if (pathname == NULL)
    c_puterror("pathname is empty in c_open");
  fd = open(pathname, flags);
  if (fd == -1)
    c_puterror("pathname or flags aren't correct in c_open");
  return (fd);
}
