/*
** my_strcat.c for rt in /home/chreti_o/ProjetsEnCours/RayTracer/screenshot
** 
** Made by Octave Chretien
** Login   <chreti_o@epitech.net>
** 
** Started on  Sun Jun  8 22:13:46 2014 Octave Chretien
** Last update Sun Jun  8 22:16:38 2014 Octave Chretien
*/

#include	"screenshot.h"

char		*my_strcat(char *dest, char *src)
{
  int		i;
  int		j;
  char		*ret;

  i = 0;
  j = 0;
  if ((ret = malloc((my_strlen(dest) + my_strlen(src) + 1)
		    * sizeif(*ret))) == NULL)
    {
      my_putstr("Erreur de malloc\n");
      exit(-1);
    }
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
