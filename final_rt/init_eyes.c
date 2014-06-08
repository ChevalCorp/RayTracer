/*
** init_eyes.c for rt in /home/lautel_m/Documents/2013_rtv1_test
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Sat May 31 18:54:56 2014 marc-aurele lautel
** Last update Sun Jun  8 19:06:24 2014 marc-aurele lautel
*/

#include	"rtv1.h"

t_eye		*init_eyes(t_rtv1 *rt, int x, int y)
{
  rt->eye->xeye = -200;
  rt->eye->yeye = 10;
  rt->eye->zeye = 0;

  rt->eye->Vx = 350; /* distance / profondeur*/
  rt->eye->Vy = (rt->win->winx / 2) - x;
  rt->eye->Vz = (rt->win->winy / 2) - y;
}
