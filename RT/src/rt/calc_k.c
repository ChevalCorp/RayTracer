/*
** calc_k.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 16:42:59 2014 Olivier Remy
** Last update Thu Jun  5 16:44:10 2014 Olivier Remy
*/

#include	"funcrt.h"

int		calc_k(t_rtv1 *rt)
{
  t_obj		*tmp;
  double	tmp_k;
  int		savepos;
  int		i;

  i = 0;
  tmp = rt->start;
  tmp_k = -1;
  while (i < rt->lenght)
    {
      if (tmp->k > 0.00001 && (tmp_k == -1 || tmp_k > tmp->k))
        {
          tmp_k = tmp->k;
          savepos = i;
        }
      tmp = tmp->next;
      i++;
    }
  return (savepos);
}
