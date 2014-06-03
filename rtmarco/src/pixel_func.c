/*
** pixel_func.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Tue Feb 25 14:06:57 2014 marc-aurele lautel
** Last update Tue May 27 16:01:11 2014 marc-aurele lautel
*/

#include	"rtv1.h"

int		aff_pixel(int color, t_rtv1 *rt, int x, int y)
{
  t_obj		*tmp;
  int		i;

  tmp = rt->start;
  i = 0;
  while (i < rt->lenght)
    {
      if (i == color)
	{

	  put_pixel_to_img(rt->img->data, get_dot(x, y), get_color(tmp->color->r, tmp->color->v, tmp->color->b), rt->sbe->sizeline);
	  return (0);
	}
      tmp = tmp->next;
      i++;
    }
  put_pixel_to_img(rt->img->data, get_dot(x, y), get_color(40, 40, 40), 
		   rt->sbe->sizeline);
  return (0);
}

t_dot		get_dot(int x, int y)
{
  t_dot		dot;

  dot.x = x;
  dot.y = y;
  return (dot);
}

t_color		get_color(int r, int v, int b)
{
  t_color	color;

  color.r = r;
  color.v = v;
  color.b = b;
  return (color);
}

void		put_pixel_to_img(char *data, t_dot dot, t_color color, 
				 int sizeline)
{
  int		i;

  i = dot.x * 4 + sizeline * dot.y;
  data[i] = color.b;
  data[i + 1] = color.v;
  data[i + 2] = color.r;
}
