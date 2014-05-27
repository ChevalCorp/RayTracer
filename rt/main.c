/*
** main.c for epic_editor in /home/remy_o/rendu/epic_js_fantasy/epic_editor
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 03:08:48 2014 Olivier Remy
** Last update Sun May 11 07:19:09 2014 Olivier Remy
*/

#include	"epic_editor.h"

int		main(int ac, char **av)
{
  if (ac != 2)
    c_puterror("nombre d'arguments incorrect");
  else
    epic_editor(av[1]);
  return (0);
}
