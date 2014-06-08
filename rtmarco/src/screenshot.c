/*
** screenshot.c for rt in /home/chreti_o/ProjetsEnCours/RayTracer/rtmarco/src
** 
** Made by Octave Chretien
** Login   <chreti_o@epitech.net>
** 
** Started on  Tue Jun  3 15:32:06 2014 Octave Chretien
** Last update Tue Jun  3 20:44:51 2014 Octave Chretien
*/

#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	<stdio.h>
#include	<string.h>
#include	"rtv1.h"

char		*my_strcat(char *dest, char *src)
{
  int		i;
  int		j;
  char		*ret;

  i = 0;
  j = 0;
  ret = malloc((my_strlen(dest) + my_strlen(src) + 1) * sizeof(*ret));
  while (dest[i] != '\0')
    {
      ret[i] = dest[i];
      i++;
    }
  while (src[j] != '\0')
    {
      ret[i] = src[j];
      i++;
      j++;
    }
  ret[i] = '\0';
  return (ret);
}

static	void	encode_png(int fd, t_rtv1 *rt)
{

}

static	void	create_png_file(t_rtv1 *rt)
{
  char		*screenfile;
  int		i;
  int		fd;
  char		integer[20];

  i = 1;
  screenfile = "screenshot.png";
  while ((fd = open(screenfile, O_RDWR | O_CREAT | S_IRWXU, S_IRGRP, S_IRWXO)) == -1)
    {
      snprintf(integer, sizeof(integer), "%d", i);
      screenfile = my_strcat(my_strcat("screenshot", integer), ".png");
      i++;
    }
  encode_png(fd, rt);
  close(fd);
}

void		screenshot(t_rtv1 *rt)
{
  create_png_file(rt);
  my_putstr("Screenshot effectué avec succès.\n");
}
