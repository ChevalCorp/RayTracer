/*
** init_cylindre.c for epic_editor in /home/remy_o/rendu/rt/parcer
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon May 26 19:13:15 2014 Olivier Remy
** Last update Sun Jun  8 20:29:00 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_cylindre	*init_cylindre(t_cord *cord, t_cord *rot, int r, int s, int c)
{
  t_cylindre	*cylindre;

  cylindre = malloc(sizeof(t_cylindre));
  cylindre->rot = rot;
  cylindre->cord = cord;
  cylindre->rayon = r;
  cylindre->size = s;
  cylindre->color = c;
  return (cylindre);
}
