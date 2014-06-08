/*
** main.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 11:39:33 2014 Olivier Remy
** Last update Fri Jun  6 08:43:11 2014 Olivier Remy
*/

#include	"funcrt.h"

int		main(int ac, char **av)
{
  t_map		*map;

  if (ac != 2)
    c_puterror("nombre d'arguments incorrect");
  else
    {
      map = epic_editor(av[1]);
      rt(map);
    }
  return (0);
}
