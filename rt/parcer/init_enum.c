/*
** init_enum.c for epic_editor in /home/remy_o/rendu/epic_js_fantasy/epic_editor
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sat May 24 16:42:01 2014 Olivier Remy
** Last update Mon May 26 19:53:21 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		init_enum(t_key *keys)
{
  keys[0].key = "Projector";
  keys[0].func = &make_projo;
  keys[1].key = "Sphere";
  keys[1].func = &make_sphere;
  keys[2].key = "Cone";
  keys[2].func = &make_cone;
  keys[3].key = "Plan";
  keys[3].func = &make_plan;
  keys[4].key = "Cylindre";
  keys[4].func = &make_cylindre;
  keys[5].key = "Eye";
  keys[5].func = &make_eye;
}
