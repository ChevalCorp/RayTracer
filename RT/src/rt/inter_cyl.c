/*
** inter_cylindre.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
**
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
**
** Started on  Sat Mar 15 10:12:23 2014 marc-aurele lautel
** Last update Fri Jun  6 07:54:33 2014 Olivier Remy
*/

#include	"funcrt.h"

static	double          calc_c_cy(t_eye *eyeb, t_obj *obj)
{
  double        x;
  double        y;
  double        c;

  x = eyeb->xeye - obj->eye->xeye;
  y = eyeb->yeye - obj->eye->yeye;
  c = pow(x, 2) + pow(y, 2) - pow(obj->R, 2);
  return (c);
}

static	double          calc_b_cy(t_eye *eyeb, t_obj *obj)
{
  double        x;
  double        y;
  double        b;

  x = eyeb->xeye - obj->eye->xeye;
  y = eyeb->yeye - obj->eye->yeye;
  b = (2 * x * eyeb->Vx) + (2 * y * eyeb->Vy);
  return (b);
}

void		inter_cyl(t_eye *eyeb, t_obj *obj)
{
  double	a;
  double	b;
  double	c;
  double	delta;
  double	k1;
  double	k2;

  a = pow(eyeb->Vx, 2) + pow(eyeb->Vy, 2);
  b = calc_b_cy(eyeb, obj);
  c = calc_c_cy(eyeb, obj);
  delta = pow(b, 2) - 4*a*c;
  if (delta > 0)
    {
      k1 = (-b + sqrt(delta)) / (2 * a);
      k2 = (-b - sqrt(delta)) / (2 * a);
      if (k1 > 0.00001 && k1 < k2)
        obj->k = k1;
      else if (k2 > 0.00001 && k2 < k1)
        obj->k = k2;
      else
        obj->k = 0;
    }
  else if (delta <= 0)
    obj->k = 0;
}
