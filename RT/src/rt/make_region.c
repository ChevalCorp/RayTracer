/*
** make_region.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/src/rt
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 17:09:13 2014 Olivier Remy
** Last update Fri Jun  6 14:25:11 2014 Olivier Remy
*/

#include	"funcrt.h"

t_regionrt	*make_region(t_rt *rt, int y_start, int y_limit)
{
  t_regionrt	*region;

  region = c_malloc(sizeof(t_regionrt));
  region->rt = rt;
  region->y_start = y_start;
  region->y_limit = y_limit;
  return (region);
}
