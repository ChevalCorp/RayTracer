/*
** get_next_line.c for rtv1 in /home/lautel_m/Documents/epitech_2018/Igraph/rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Sun Mar 16 12:33:29 2014 marc-aurele lautel
** Last update Sun Mar 16 12:33:32 2014 marc-aurele lautel
*/

#include	"rtv1.h"

char		*read_line(int fd)
{
  int		i;
  int		res;
  char		*line;
  char		courant;

  i = 0;
  line = NULL;
  if (fd < 0)
    return (NULL);
  res = read(fd, &courant, 1);
  if (res == 1)
    {
      line = (char *)malloc(sizeof(char*));
      while(courant != '\n' && res == 1)
	{
	  line[i] = courant;
	  i++;
	  line = (char *)realloc(line, (1+i) * sizeof(char*));
	  res = read(fd, &courant, 1);
	}
      line[i] = '\0';
    }
  return (line);
}
