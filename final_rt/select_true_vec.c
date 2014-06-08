/*
** select_true_vec.c for rt in /home/lautel_m/Documents/2013_rtv1_test
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Fri Jun  6 17:34:09 2014 marc-aurele lautel
** Last update Sun Jun  8 21:14:30 2014 marc-aurele lautel
*/

#include	"rtv1.h"

void		calc_vec_plan(t_obj *obj)
{
 obj->eye->Vx = 0;
 obj->eye->Vy = 0;
 obj->eye->Vz = 100;
 obj->eye->VecLen = sqrt(pow(obj->eye->Vx, 2) + pow(obj->eye->Vy, 2)
			 + pow(obj->eye->Vz, 2));

 obj->eye->NVx = obj->eye->Vx / obj->eye->VecLen;
 obj->eye->NVy = obj->eye->Vy / obj->eye->VecLen;
 obj->eye->NVz = obj->eye->Vz / obj->eye->VecLen;
}

void		calc_vec_sphere(t_rtv1 *rt, t_obj *obj)
{
  obj->eye->Vx = - obj->eye->xeye + rt->eye->xeye;
  obj->eye->Vy = - obj->eye->yeye + rt->eye->yeye;
  obj->eye->Vz = - obj->eye->zeye + rt->eye->zeye;
  obj->eye->VecLen = sqrt(pow(obj->eye->Vx, 2) + pow(obj->eye->Vy, 2)
			  + pow(obj->eye->Vz, 2) - pow(obj->R, 2));
  obj->eye->NVx = obj->eye->Vx / obj->eye->VecLen;
  obj->eye->NVy = obj->eye->Vy / obj->eye->VecLen;
  obj->eye->NVz = obj->eye->Vz / obj->eye->VecLen;
}

void		calc_vec_cyl(t_rtv1 *rt, t_obj *obj)
{
  obj->eye->Vx = - obj->eye->xeye + rt->eye->xeye;
  obj->eye->Vy = - obj->eye->yeye + rt->eye->yeye;
  obj->eye->Vz = 0;
  obj->eye->VecLen = sqrt(pow(obj->eye->Vx, 2) + pow(obj->eye->Vy, 2)
			  - pow(obj->R, 2));
  obj->eye->NVx = obj->eye->Vx / obj->eye->VecLen;
  obj->eye->NVy = obj->eye->Vy / obj->eye->VecLen;
  obj->eye->NVz = obj->eye->Vz / obj->eye->VecLen;
}

void		calc_vec_cone(t_rtv1 *rt, t_obj *obj)
{
  obj->eye->Vx = - obj->eye->xeye + rt->eye->xeye;
  obj->eye->Vy = - obj->eye->xeye + rt->eye->xeye;
  obj->eye->Vz = - obj->eye->xeye + rt->eye->xeye;
  obj->eye->VecLen = sqrt(pow(obj->eye->Vx, 2) + pow(obj->eye->Vy, 2)
			  + pow(obj->eye->Vz, 2) - pow(obj->R, 2));
  obj->eye->NVx = obj->eye->Vx / obj->eye->VecLen;
  obj->eye->NVy = obj->eye->Vy / obj->eye->VecLen;
  obj->eye->NVz = obj->eye->Vz / obj->eye->VecLen;
}

void		select_t_vec(t_rtv1 *rt, t_obj *obj)
{
  if (obj->type == 0)
    calc_vec_plan(obj);
  else if (obj->type == 1)
    calc_vec_sphere(rt, obj);
  else if (obj->type == 2)
    calc_vec_cyl(rt, obj);
  else if (obj->type == 3)
    calc_vec_cyl(rt, obj);
  else
    {
      obj->eye->Vx = - obj->eye->xeye + rt->eye->xeye;
      obj->eye->Vy = - obj->eye->yeye + rt->eye->yeye;
      obj->eye->Vz = - obj->eye->zeye + rt->eye->zeye;
      obj->eye->VecLen = sqrt(pow(obj->eye->Vx, 2) + pow(obj->eye->Vy, 2)
			      + pow(obj->eye->Vz, 2));
      obj->eye->NVx = obj->eye->Vx / obj->eye->VecLen;
      obj->eye->NVy = obj->eye->Vy / obj->eye->VecLen;
      obj->eye->NVz = obj->eye->Vz / obj->eye->VecLen;
    }
}
