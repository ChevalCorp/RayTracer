/*
** funcrt.h for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 14:23:01 2014 Olivier Remy
** Last update Thu Jun  5 14:32:28 2014 Olivier Remy
*/

#ifndef		FUNCRT_H_
# define	FUNCRT_H_

# include	"rt.h"

void		start_rt(t_rtv1 *);
void		rt_initialisation(t_rtv1 *);
void		init_conf(t_rtv1 *, int, char **);
t_eye		*init_eyes(t_rtv1 *, int, int);
void		addrota(char *, int, t_obj *);
void		addcolo(char *, int, t_obj *);
void		addcoor(char *, int, t_obj *);
void		addtype(char *, int, t_obj *);
void		set_obj(t_rtv1 *, int);
void		addrayo(char *, int, t_obj *);
void		showlist(t_rtv1 *);
t_rtv1		*addlast(t_rtv1 *);
int		my_strcmp2(char *, char *, int);
int		my_strcmp(char *, char *);
int		my_strlen(char *);
void		my_putchar(char);
void		my_putstr(char *);
int		my_getnbr(char *);
char		*read_line(int);
int		aff_pixel(int, t_rtv1 *, int, int);
t_dot		get_dot(int, int);
t_color		get_color(int, int, int);
void		put_pixel_to_img(char *, t_dot, t_color, int);
int		calc_k(t_rtv1 *);
int		calcul_pixel(t_rtv1 *, int, int);
void		image_fill(t_rtv1 *);
int		gere_key(int, t_rtv1 *);
void		inter_plan(t_eye *, t_obj *);
void		inter_sphere(t_eye *, t_obj *);
void		inter_cone(t_eye *, t_obj *);
void		inter_cyl(t_eye *, t_obj *);
void		screenshot(t_rtv1 *);

#endif		/* !FUNCRT_H_ */
