/*
** screenshot.c for rt in /home/chreti_o/ProjetsEnCours/RayTracer/rtmarco/src
** 
** Made by Octave Chretien
** Login   <chreti_o@epitech.net>
** 
** Started on  Tue Jun  3 15:32:06 2014 Octave Chretien
** Last update Sun Jun  8 22:20:12 2014 Octave Chretien
*/

#include	"rtv1.h"
#include	"screenshot.h"

static	void	init_struct_screen(t_screen *screen, t_rtv1 *rt)
{
  screen->size = (rt->win->winx * rt->win->winy) * 4 + 54;
  screen->reserved = 0;
  screen->offset = 54;
  screen->header_size = 40;
  screen->win_x = rt->win->winx;
  screen->win_y = rt->win->winy;
  screen->plans = 1;
  screen->bpp = 32;
  screen->compress = 0;
  screen->size_img = rt->win->winx * rt->win->winy;
  screen->res_hori = 0;
  screen->res_vert = 0;
  screen->color = 0;
  screen->imp_color = 0;
}

static	void	encode_bmp(int fd, t_rtv1 *rt)
{
  t_screen	*screen;
  int		i;
  int		hex;

  if ((screen = malloc(sizeof(t_screen))) == NULL)
    {
      printf("Erreur de malloc\n");
      exit(-1);
    }
  init_struct_screen(screen, rt);
  put_header(fd, screen);
  put_heading(fd, screen);
  i = 0;
  while (i != screen->size)
    {
      hex = rt->img->data[i];
      write(fd, &hex, 1);
      i++;
    }
}

static	char	*create_bmp_file(t_rtv1 *rt)
{
  char		*screenfile;
  int		i;
  int		fd;
  char		integer[20];

  i = 1;
  screenfile = "screenshot.bmp";
  while (access(screenfile, F_OK) == 0)
    {
      snprintf(integer, sizeof(integer), "%d", i);
      screenfile = my_strcat(my_strcat("screenshot", integer), ".bmp");
      i++;
    }
  fd = open(screenfile, O_RDWR | O_CREAT, S_IRWXU | S_IRGRP | S_IRWXO);
  encode_bmp(fd, rt);
  close(fd);
  return (screenfile);
}

void		screenshot(t_rtv1 *rt)
{
  char		*str;

  str = create_bmp_file(rt);
  my_putstr("Screenshot effectué avec succès : ");
  my_putstr(str);
  my_putstr("\n");
}
