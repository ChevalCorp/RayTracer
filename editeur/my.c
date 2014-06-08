/*
** my.c for editor in /home/nory_m/Documents/rt
** 
** Made by Maxime
** Login   <nory_m@epitech.net>
** 
** Started on  Fri Jun  6 12:13:29 2014 Maxime
** Last update Sun Jun  8 18:46:30 2014 Maxime
*/

#include	"header.h"

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

char		*my_strcpy(char *str, const char *src)
{
  int		i;

  i = 0;
  while (str && src && src[i] != '\0')
    {
      str[i] = src[i];
      i++;
    }
  if (i != 0)
    str[i] = '\0';
  return (str);
}

int		my_strcmp(char *s1, char *s2)
{
  int		i;

  i = 0;
  while (s1[i] && s2[i])
    {
      i++;
      if (s1[i] > s2[i])
	return (1);
      if (s1[i] < s2[i])
	return (-1);
    }
  if (s1[i] > s2[i])
    return (1);
  if (s1[i] < s2[i])
    return (-1);
  return (0);
}
