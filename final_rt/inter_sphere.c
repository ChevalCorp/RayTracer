/*
** inter_sphere.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Tue Mar 11 14:14:04 2014 marc-aurele lautel
** Last update Sun Jun  8 18:51:16 2014 marc-aurele lautel
*/

#include	"rtv1.h"

double		calc_c_value(t_eye *eyeb, t_obj *obj)
{
  double	x;
  double       	y;
  double	z;
  double	c;

  x = eyeb->xeye;
  y = eyeb->yeye;
  z = eyeb->zeye;
  c = pow(x, 2) + pow(y, 2) + pow(z, 2) - pow(obj->R, 2);
  return (c);
}

double		calc_b_value(t_eye *eyeb, t_obj *obj)
{
  double	x;
  double	y;
  double	z;
  double	b;

  x = eyeb->Vx - obj->eye->xeye;
  y = eyeb->Vy - obj->eye->yeye;
  z = eyeb->Vz - obj->eye->zeye;
  b = 2 * (x * eyeb->xeye + y * eyeb->yeye + z * eyeb->zeye); 
  return (b);
}

void		inter_sphere(t_eye *eyeb, t_obj *obj)
{
  double       	delta;
  double       	k1;
  double	k2;
  double       	a;
  double       	b;
  double       	c;

  a = pow((eyeb->Vx - obj->eye->xeye), 2) + pow((eyeb->Vy - obj->eye->yeye), 2) + pow((eyeb->Vz - obj->eye->zeye), 2);
  b = calc_b_value(eyeb, obj);
  c = calc_c_value(eyeb, obj);
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
