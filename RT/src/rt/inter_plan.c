/*
** inter_plan.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
**
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
**
** Started on  Thu Mar 13 14:17:47 2014 marc-aurele lautel
** Last update Fri Jun  6 07:54:03 2014 Olivier Remy
*/

#include	"funcrt.h"

void		inter_plan(t_eye *eyeb, t_obj *obj)
{
  double	k;

  if (eyeb->Vz == 0)
    obj->k = 0;
  k = -1 * (obj->eye->zeye - eyeb->zeye) / eyeb->Vz;
  if (k > 0.00001)
    obj->k = k;
  else
    obj->k = 0;
}
