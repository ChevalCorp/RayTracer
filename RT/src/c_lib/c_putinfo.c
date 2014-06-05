/*
** c_putinfo.c for c_putinfo.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 15 16:08:55 2014 Olivier Remy
** Last update Tue Apr 15 16:20:30 2014 Olivier Remy
*/

#include	"langc.h"

void		c_putinfo(char *mess)
{
  c_putstr("\033[39;33m");
  c_putstr("[INFO] : ");
  c_putstr("\033[39;37m");
  c_putstr(mess);
  c_putchar('\n');
}
