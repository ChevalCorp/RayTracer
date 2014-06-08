/*
** c_wrichar.c for c_lib in /home/remy_o/rendu/epic_js_fantasy
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 09:13:37 2014 Olivier Remy
** Last update Tue May 13 14:16:19 2014 Olivier Remy
*/

#include	"langc.h"

void		c_wrichar(char c, const int fd)
{
  write (fd, &c, 1);
}
