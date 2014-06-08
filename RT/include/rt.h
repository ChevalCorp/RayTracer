/*
** rt.h for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 14:18:29 2014 Olivier Remy
** Last update Fri Jun  6 12:54:52 2014 Olivier Remy
*/

#ifndef			RT_H_
# define		RT_H_

# include		"data.h"
# include		<math.h>
# include		<mlx.h>
# include		<signal.h>
# include		<pthread.h>

typedef	struct		s_dot
{
  int			x;
  int			y;
}			t_dot;

typedef	struct		s_mlx
{
  void			*mlx_ptr;
  void			*win_ptr;
  void			*img_ptr;
  int			imgx;
  int			imgy;
}			t_mlx;

typedef	struct		s_sbe
{
  char			*data;
  int			sizeline;
  int			bpp;
  int			endian;
}			t_sbe;

typedef	struct		s_calc
{
  double		Vx;
  double		Vy;
  double		Vz;
}			t_calc;

typedef	struct		s_rt
{
  t_dot			*pxl;
  t_win			*win;
  t_eye			*eye;
  t_list		*obj;
  t_mlx			*mlx;
  t_sbe			*sbe;
  pthread_mutex_t	mutex_lock;
}			t_rt;

typedef	struct		s_regionrt
{
  t_rt			*rt;
  int			y_start;
  int			y_limit;
}			t_regionrt;

#endif			/* !RT_H_ */
