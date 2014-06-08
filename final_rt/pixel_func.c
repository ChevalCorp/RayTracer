/*
** pixel_func.c for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Tue Feb 25 14:06:57 2014 marc-aurele lautel
** Last update Sun Jun  8 19:30:42 2014 marc-aurele lautel
*/

#include	"rtv1.h"

int		aff_pixel(int k, t_rtv1 *rt, int x, int y)
{
  t_obj		*tmp;
  int		i;

  tmp = rt->start;
  i = 0;
  while (i < rt->lenght)
    {
      if (i == k)
	{
	  put_pixel_to_img(rt->img->data, get_dot(x, y), 
			   get_color(tmp->color->r, tmp->color->v, 
				     tmp->color->b), rt->sbe->sizeline);
	  re_init(tmp);
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

t_color		get_color(double r, double v, double b)
{
  t_color	color;

  /*
  color.r = (r <= 0) ? 0 : (r >= 255) ? 255 : r;
  color.v = (v <= 0) ? 0 : (v >= 255) ? 255 : v;
  color.b = (b <= 0) ? 0 : (b >= 255) ? 255 : b;
  */

  if (r >= 255)
    color.r = 255;
  else if (r < 0)
    color.r = 0;
  else
    color.r = r;
  
  if (v >= 255)
    color.v = 255;
  else if (v < 0)
    color.v = 0;
  else
    color.v = v;
  
  if (b >= 255)
    color.b = 255;
  else if (b < 0)
    color.b = 0;
  else
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
