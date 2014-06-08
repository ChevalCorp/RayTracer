/*
** xmalloc.c for editor in /home/nory_m/Documents/Projets/raytracer
** 
** Made by Maxime
** Login   <nory_m@epitech.net>
** 
** Started on  Thu Jun  5 01:00:19 2014 Maxime
** Last update Sun Jun  8 17:23:12 2014 Maxime
*/

#include	"header.h"

void		*xmalloc(int size)
{
  void		*data;

  if ((data = malloc(size)) == NULL)
    {
      printf("Error : Can't allocate memory\n");
      exit (1);
    }
  return (data);
}
