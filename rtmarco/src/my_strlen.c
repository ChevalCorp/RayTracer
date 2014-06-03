/*
** my_strlen.c for rt in /home/lautel_m/Documents/2013_rtv1_test
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Sat May 31 20:04:48 2014 marc-aurele lautel
** Last update Sat May 31 20:05:07 2014 marc-aurele lautel
*/

#include	"rtv1.h"

int             my_strlen(char *str)
{
  int           i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}
