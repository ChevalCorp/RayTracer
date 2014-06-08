/*
** getnbr.c for rtv1 in /home/lautel_m/Documents/epitech_2018/Igraph/rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Sun Mar 16 17:36:09 2014 marc-aurele lautel
** Last update Sat May 31 19:25:59 2014 marc-aurele lautel
*/

#include	"rtv1.h"

int		signe(char *str)
{
  int		a;
  int		moins;
  int		plus;

  a = 0;
  moins = 0;
  plus = 0;
  while (str[a] < '0' || str[a] > '9')
    {
      if (str[a] == '-')
	moins++;
      if (str[a] == '+')
	plus++;
      a++;
    }
  if (moins % 2 == 0)
    return (1);
  else
    return (-1);
}

int		condition(char *str)
{
  int		i;
  int		a;

  i = 0;
  a = 0;
  while ((str[a] < '0' || str[a] > '9') && str[a] != '\0')
    {
      i++;
      a++;
    }
  return (i);
}

int		my_len(char *str)
{
  int		i;
  int		res;
  int		a;

  i = 0;
  res = 1;
  a = condition(str);
  while (str[a] >= '0' && str[a] <= '9')
    {
      a++;
      i++;
    }
  while (i > 0)
    {
      res = res * 10;
      i--;
    }
  res = res / 10;
  return (res);
}

int		my_getnbr(char *str)
{
  int		i;
  int		mult;
  int		nb;
  int		res;

  res = 0;
  nb = 0;
  if (my_strlen(str) > 10)
    {
      my_putstr("Nombre trop grand\n");
      return (-1);
    }
  i = condition(str);
  mult = my_len(str);
  while (str[i] != '\0' || mult > 0)
    {
      nb = str[i] - 48;
      res = res + nb * mult;
      mult = mult / 10;
      i++;
    }
  res = res * signe(str);
  return (res);
}
