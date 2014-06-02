/*
** utility_func.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Fri Mar 14 13:48:50 2014 marc-aurele lautel
** Last update Sat May 31 20:05:52 2014 marc-aurele lautel
*/

#include	"rtv1.h"

int		my_strcmp2(char *s1, char *s2, int i)
{
  int		j;

  j = 0;
  while (s1[j])
    {
      if (s1[j] != s2[i])
	return (0);
      j++;
      i++;
    }
  return (1);
}

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i])
    {
      if (s1[i] != s2[i])
	return (0);
      i++;
    }
  return (1);
}
