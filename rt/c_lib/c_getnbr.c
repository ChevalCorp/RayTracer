/*
** c_getnbr.c for c_getnbr.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Tue Apr 15 17:02:49 2014 Olivier Remy
** Last update Wed Apr 16 16:06:49 2014 Olivier Remy
*/

#include	"langc.h"

int		c_getnbr(char *str)
{
  int		sign;
  int		n;
  int		nbr;

  n = -1;
  nbr = 0;
  sign = 0;
  if (str == NULL)
    c_puterror("string is empty in c_getnbr");
  while (str[++n] == '-')
    sign++;
  while (str[n])
    {
      nbr = nbr * 10;
      if (str[n] <= '9' && str[n] >= '0')
	nbr = nbr + (str[n++] - 48);
      else
	c_puterror("string isn't a number in c_getnbr");
    }
  if (sign % 2 == 1)
    nbr = nbr * -1;
  return (nbr);
}
