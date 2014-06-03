/*
** init_token.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 18:09:54 2014 Olivier Remy
** Last update Mon Jun  2 20:31:37 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_token		*init_token()
{
  t_token	*token;

  token = c_malloc(sizeof(t_token) * 5);
  token[0].token = SPOT;
  token[0].func = &aff_spot;
  token[1].token = CONE;
  token[1].func = &aff_cone;
  token[2].token = PLAN;
  token[2].func = &aff_plan;
  token[3].token = CYLINDRE;
  token[3].func = &aff_cylindre;
  token[4].token = SPHERE;
  token[4].func = &aff_sphere;
  return (token);
}
