/*
** rtv1.h for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Mon Feb 24 11:26:26 2014 marc-aurele lautel
** Last update Tue Jun  3 15:41:36 2014 Octave Chretien
*/

#ifndef			RTV1_H_
# define		RTV1_H_

# include		<math.h>
# include		<mlx.h>
# include		<stdlib.h>
# include		<signal.h>
# include		<unistd.h>
# include		<sys/types.h>
# include		<sys/stat.h>
# include		<fcntl.h>
# include		<pthread.h>

typedef	struct		s_color
{
  int			r;
  int			v;
  int			b;
}			t_color;

typedef	struct		s_dot
{
  int			x;
  int			y;
}			t_dot;

typedef	struct		s_win
{
  int			winx;
  int			winy;
}			t_win;

typedef	struct		s_img
{
  void			*mlx_ptr;
  void			*win_ptr;
  void			*img_ptr;
  int			imgx;
  int			imgy;
  char			*data;
}			t_img;

typedef	struct		s_sbe
{
  int			sizeline;
  int			bpp;
  int			endian;
}			t_sbe;

typedef	struct		s_eye
{
  int			xeye;
  int			yeye;
  int			zeye;
  double		Vx;
  double		Vy;
  double		Vz;
}			t_eye;

typedef	struct	       	s_obj
{
  t_color		*color;
  t_eye			*eye;
  struct	s_obj  	*next;
  struct	s_obj  	*prev;
  double       		k;
  double       		R;
  int	       		type;
}	       		t_obj;

typedef	struct		s_rtv1
{
  t_img			*img;
  t_win			*win;
  t_eye			*eye;
  t_sbe			*sbe;
  t_obj			*start;
  t_obj			*end;
  int			lenght;
  pthread_mutex_t	mutex_lock;
}			t_rtv1;

typedef	struct		s_regionrtv1
{
  t_rtv1		*rtv1;
  int			y_start;
  int			y_limit;
}			t_regionrtv1;

void			start_rt(t_rtv1 *);
void			rt_initialisation(t_rtv1 *);
void			init_conf(t_rtv1 *, int, char **);
t_eye			*init_eyes(t_rtv1 *, int, int);
void			addrota(char *, int, t_obj *);
void			addcolo(char *, int, t_obj *);
void			addcoor(char *, int, t_obj *);
void			addtype(char *, int, t_obj *);
void			set_obj(t_rtv1 *, int);
void			addrayo(char *, int, t_obj *);
void			showlist(t_rtv1 *);
t_rtv1			*addlast(t_rtv1 *);
int			my_strcmp2(char *, char *, int);
int			my_strcmp(char *, char *);
int			my_strlen(char *);
void			my_putchar(char);
void			my_putstr(char *);
int			my_getnbr(char *);
char			*read_line(int);
int			aff_pixel(int, t_rtv1 *, int, int);
t_dot			get_dot(int, int);
t_color			get_color(int, int, int);
void			put_pixel_to_img(char *, t_dot, t_color, int);
int			calc_k(t_rtv1 *);
int			calcul_pixel(t_rtv1 *, int, int);
void			image_fill(t_rtv1 *);
int			gere_key(int, t_rtv1 *);
void			inter_plan(t_eye *, t_obj *);
void			inter_sphere(t_eye *, t_obj *);
void			inter_cone(t_eye *, t_obj *);
void			inter_cyl(t_eye *, t_obj *);
void			screenshot(t_rtv1 *);

#endif			/* !RTV1_H_ */
