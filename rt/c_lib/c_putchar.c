/*
** c_putchar.c for c_putchar.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Apr 14 22:26:02 2014 Olivier Remy
** Last update Tue Apr 15 18:39:35 2014 Olivier Remy
*/

#include	"langc.h"

void		c_putchar(char c)
{
  if (c == '\0')
    c_puterror("character is empty in c_putchar");
  write (1, &c, 1);
}
