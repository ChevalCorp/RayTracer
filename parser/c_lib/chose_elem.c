/*
** chose_elem.c for RayTracer in /home/mortem/Projets/RayTracer/RT/src/parser
**
** Made by Antoine Favarel
** Login   <mortem@epitech.net>
**
** Started on  Sun Jun  8 20:55:44 2014 Antoine Favarel
** Last update Sun Jun  8 21:03:38 2014 Olivier Remy
*/

#include	"langc.h"

char		*chose_elem(t_list *list, int nb)
{
  int		i;
  t_elem	*tmp;

  i = -1;
  tmp = list->first;
  while (tmp && ++i <= nb)
    if (i == nb)
      return (tmp->data);
    else
      tmp = tmp->next;
  return (NULL);
}
