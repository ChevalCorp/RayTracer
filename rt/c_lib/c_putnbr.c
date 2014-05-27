/*
** c_putnbr.c for c_putnbr.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 15 13:43:22 2014 Olivier Remy
** Last update Tue Apr 15 13:54:14 2014 Olivier Remy
*/

#include	"langc.h"

void		c_putnbr(int nbr)
{
  if (nbr < 0)
    {
      c_putchar('-');
      nbr = nbr * -1;
    }
  if (nbr >= 10)
    c_putnbr(nbr / 10);
  nbr = nbr % 10;
  c_putchar(nbr + 48);
}
