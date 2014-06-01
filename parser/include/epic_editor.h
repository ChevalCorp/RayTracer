/*
** epic_editor.h for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 03:23:27 2014 Olivier Remy
** Last update Sun Jun  1 01:47:18 2014 Olivier Remy
*/

#ifndef		EPICEDITOR_H_
# define	EPICEDITOR_H_

# include	"data.h"
/*
**		autres
*/
void		epic_editor(char *file);
void		check_enum(t_elem *elem, t_map *map);
t_list		*split_list(t_elem *elem);
/*
**		makes
*/
t_elem		*make_sphere(t_list *list);
t_elem		*make_cone(t_list *list);
t_elem		*make_cylindre(t_list *list);
t_elem		*make_plan(t_list *list);
t_elem		*make_projo(t_list *list);
t_eye		*make_eye(t_list *list);
t_map		*make_map(t_list *list);
/*
**		inits
*/
t_key		*init_enum();
t_cord		*init_cord(double x, double y, double z);
t_sphere	*init_sphere(t_cord *cord, int r, int c);
t_cone		*init_cone(t_cord *cord, int r, int s, int c);
t_cylindre	*init_cylindre(t_cord *cord, int r, int s, int c);
t_plan		*init_plan(t_cord *cord, int c);
t_projo		*init_projo(t_cord *cord, int c);
t_eye		*init_eye(t_cord *cord, float angl);
t_map		*init_map();

#endif		/* EPICEDITOR_H_ */
