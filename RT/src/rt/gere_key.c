/*
** gere_key.c for rt in /home/lautel_m/rendu/MUL_2013_rtv1
**
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
**
** Started on  Tue Feb 25 14:39:02 2014 marc-aurele lautel
** Last update Fri Jun  6 07:49:25 2014 Olivier Remy
*/

#include	"funcrt.h"

int		gere_key(int keycode, t_rtv1 *rt)
{
  if (keycode == 65307)
    exit(1);
  image_fill(rt);
  return (0);
}
