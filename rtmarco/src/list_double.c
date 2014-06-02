/*
** list_double.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Fri Mar 14 11:29:06 2014 marc-aurele lautel
** Last update Sun Mar 16 21:44:52 2014 marc-aurele lautel
*/

#include	"rtv1.h"

void		showlist(t_rtv1 *rt)
{
  t_obj		*tmp;
  int		i;

  i = 0;
  tmp = rt->start;
  while (i < rt->lenght)
    {
      tmp = tmp->next;
      i++;
    }
}

t_rtv1		*addlast(t_rtv1 *unelist)
{
  t_obj		*newelem;

  if (unelist == NULL)
    return (unelist);
  if ((newelem = malloc(sizeof(t_obj))) != NULL)
    {
      newelem->next = NULL;
      if (unelist->lenght == 0)
	{
	  newelem->prev = NULL;
	  unelist->start = newelem;
	  unelist->end = newelem;
	}
      else
	{
	  unelist->end->next = newelem;
	  newelem->prev = unelist->end;
	  unelist->end = newelem;
	}
      unelist->lenght++;
    }
  return (unelist);
}
