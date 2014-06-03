/*
** epic_editor.c for epic_editor in /home/remy_o/rendu/epic_js_fantasy/epic_editor
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 03:09:47 2014 Olivier Remy
** Last update Mon Jun  2 20:35:10 2014 Olivier Remy
*/

#include	"epic_editor.h"

void		epic_editor(char *file)
{
  int		fd;
  t_list	*list;
  t_map		*map;

  fd = c_open(file, O_RDONLY);
  list = str_to_linelist(fd);
  map = make_map(list);
  aff_map(map);
}
