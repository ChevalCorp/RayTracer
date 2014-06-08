/*
** funcrt.h for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 14:23:01 2014 Olivier Remy
** Last update Sun Jun  8 22:52:43 2014 Antoine Favarel
*/

#ifndef		FUNCRT_H_
# define	FUNCRT_H_

# include	"rt.h"

void		start_rt(t_rt *);
void		rt_initialisation(t_rt *);
int		aff_pixel(int, t_rt *, int, int);
t_dot		get_dot(int, int);
t_color		get_color(int, int, int);
void		put_pixel_to_img(char *, t_dot, t_color, int);
int		calc_k(t_rt *);
int		calcul_pixel(t_rt *, int, int);
void		image_fill(t_rt *);
int		gere_key(int, t_rt *);
void		inter_plan(t_rt *, t_elem *);
void		inter_sphere(t_rt *, t_elem *);
void		inter_cone(t_rt *, t_elem *);
void		inter_cyl(t_rt *, t_elem *);
void		screenshot(t_rt *);

#endif		/* !FUNCRT_H_ */
