/*
** c_puterror.c for c_puterror.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 15 15:39:37 2014 Olivier Remy
** Last update Tue Apr 15 16:03:42 2014 Olivier Remy
*/

#include	"langc.h"

void		c_puterror(char *mess)
{
  c_putstr("\033[39;31m");
  c_putstr("[ERROR] : ");
  c_putstr("\033[39;37m");
  c_putstr(mess);
  c_putchar('\n');
  exit(0);
}
