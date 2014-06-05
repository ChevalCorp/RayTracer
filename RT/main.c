/*
** main.c for rt in /home/remy_o/Documents/GroupeRT/RayTracer/RT
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Thu Jun  5 11:39:33 2014 Olivier Remy
** Last update Thu Jun  5 12:06:29 2014 Olivier Remy
*/

int		main(int ac, char **av)
{
  if (ac != 2)
    c_puterror("nombre d'arguments incorrect");
  else
    epic_editor(av[1]);
  return (0);
}
