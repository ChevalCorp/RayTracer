/*
** init_enum.c for epic_editor in /home/remy_o/rendu/epic_js_fantasy/epic_editor
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sat May 24 16:42:01 2014 Olivier Remy
** Last update Mon Jun  2 18:14:35 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_key		*init_enum()
{
  t_key		*keys;

  keys = c_malloc(sizeof(t_key) * 6);
  keys[0].key = "Spot";
  keys[0].func = &make_spot;
  keys[1].key = "Cone";
  keys[1].func = &make_cone;
  keys[2].key = "Plan";
  keys[2].func = &make_plan;
  keys[3].key = "Cylindre";
  keys[3].func = &make_cylindre;
  keys[4].key = "Eye";
  keys[4].func = &make_eye;
  keys[5].key = "Sphere";
  keys[5].func = &make_sphere;
  return (keys);
}
