/*
** aff_obj.c for epic_editor in /home/remy_o/Documents/GroupeRT/RayTracer/parser/src
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Jun  2 19:10:05 2014 Olivier Remy
** Last update Tue Jun  3 18:15:43 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		aff_obj(t_elem *obj)
{
  t_token	*token;
  int		n;

  token = init_token();
  n = -1;
  while (++n <= 4)
    {
      if (token[n].token == obj->token)
	(token[n].func)(obj);
    }
  free(token);
  c_putchar('\n');
}
