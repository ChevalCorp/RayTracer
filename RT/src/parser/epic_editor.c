/*
** epic_editor.c for epic_editor in /home/remy_o/rendu/epic_js_fantasy/epic_editor
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 03:09:47 2014 Olivier Remy
** Last update Fri Jun  6 08:42:47 2014 Olivier Remy
*/

#include	"epic_editor.h"

t_map		*epic_editor(char *file)
{
  int		fd;
  t_list	*list;
  t_map		*map;

  fd = c_open(file, O_RDONLY);
  list = str_to_linelist(fd, '|');
  if (list->first == NULL)
    c_puterror("fichier lu vide");
  map = make_map(list);
  aff_map(map);
  free(list);
  return (map);
}
