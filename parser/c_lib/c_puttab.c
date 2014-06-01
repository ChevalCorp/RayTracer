/*
** c_puttab.c for c_puttab.c in /home/remy_o/rendu/C_lib_V1
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Mon Apr 14 22:28:58 2014 Olivier Remy
** Last update Tue Apr 15 15:53:50 2014 Olivier Remy
*/

#include	"langc.h"

void		c_puttab(char **tab)
{
  int		n;

  n = -1;
  if (tab == NULL)
    c_puterror("tab is empty in c_puttab");
  while (tab[++n] != NULL)
    c_putstr(tab[n]);
}
