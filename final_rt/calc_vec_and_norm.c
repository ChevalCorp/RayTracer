/*
** normalize_vector.c for rt in /home/lautel_m/Documents/2013_rtv1_test
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Sat May 31 21:15:00 2014 marc-aurele lautel
** Last update Sun Jun  8 20:31:48 2014 marc-aurele lautel
*/

#include	"rtv1.h"

/* calcule du vecteur de base + normalisation*/
void		calc_vec_and_norm(t_rtv1 *rt, t_obj *obj)
{
  rt->eye->VecLen = sqrt(pow(rt->eye->Vx, 2) + pow(rt->eye->Vy, 2)
			  + pow(rt->eye->Vz, 2));
  
  rt->eye->NVx = rt->eye->Vx / rt->eye->VecLen;
  rt->eye->NVy = rt->eye->Vy / rt->eye->VecLen;
  rt->eye->NVz = rt->eye->Vz / rt->eye->VecLen;
}
