/*
** put_head.c for rt in /home/chreti_o/ProjetsEnCours/RayTracer/screenshot
** 
** Made by Octave Chretien
** Login   <chreti_o@epitech.net>
** 
** Started on  Sun Jun  8 22:17:24 2014 Octave Chretien
** Last update Sun Jun  8 22:20:00 2014 Octave Chretien
*/

#include	"screenshot.h"

void		put_header(int fd, t_screen *screen)
{
  int		hex;

  hex = 0x42;
  write(fd, &hex, 1);
  hex = 0x4d;
  write(fd, &hex, 1);
  hex = screen->size;
  write(fd, &hex, 4);
  hex = screen->reserved;
  write(fd, &hex, 4);
  hex = screen->offset;
  write(fd, &hex, 4);
}

void		put_heading(int fd, t_screen *screen)
{
  int		hex;

  hex = 40;
  write(fd, &hex, 4);
  hex = screen->win_x;
  write(fd, &hex, 4);
  hex = screen->win_y;
  write(fd, &hex, 4);
  hex = screen->plans;
  write(fd, &hex, 2);
  hex = screen->bpp;
  write(fd, &hex, 2);
  hex = screen->compress;
  write(fd, &hex, 4);
  hex = screen->size_img;
  write(fd, &hex, 4);
  hex = screen->res_vert;
  write(fd, &hex, 4);
  hex = screen->res_hori;
  write(fd, &hex, 4);
  hex = screen->color;
  write(fd, &hex, 4);
  hex = screen->imp_color;
  write(fd, &hex, 4);
}
