/*
** screenshot.h for rt in /home/chreti_o/ProjetsEnCours/RayTracer/rtmarco
** 
** Made by Octave Chretien
** Login   <chreti_o@epitech.net>
** 
** Started on  Thu Jun  5 18:56:45 2014 Octave Chretien
** Last update Sun Jun  8 22:22:25 2014 Octave Chretien
*/

#ifndef			SCREENSHOT_H_
# define		SCREENSHOT_H_

# include		<sys/types.h>
# include		<sys/stat.h>
# include		<fcntl.h>
# include		<stdio.h>
# include		<string.h>
# include		"rtv1.h"

# pragma		pack(1)

typedef	struct		s_screen
{
  int			size;
  int			reserved;
  int			offset;
  int			header_size;
  int			win_x;
  int			win_y;
  short int		plans;
  short int		bpp;
  int			compress;
  int			size_img;
  int			res_hori;
  int			res_vert;
  int			color;
  int			imp_color;
}			t_screen;

#pragma			pack()

char			*my_strcat(char *dest, char *src);
void			put_header(int fd, t_screen *screen);
void			put_heading(int fd, t_screen *screen);

#endif			/* !SCREENSHOT_H_ */
