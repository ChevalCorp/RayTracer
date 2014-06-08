/*
** puts_func.c for rtv1 in /home/lautel_m/Documents/epitech_2018/Igraph/rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Sun Mar 16 17:36:56 2014 marc-aurele lautel
** Last update Sun Mar 16 17:38:14 2014 marc-aurele lautel
*/

#include	"rtv1.h"

void		my_putchar(char c)
{
  write(1, &c, 1);
}

void		my_putstr(char *s)
{
  int		i;

  i = 0;
  while (s[i])
    {
      my_putchar(s[i]);
      i++;
    }
}
