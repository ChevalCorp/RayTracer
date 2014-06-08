/*
** epic_editor.h for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 03:23:27 2014 Olivier Remy
** Last update Sun Jun  8 20:46:57 2014 Olivier Remy
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
**		aff
*/
void		aff_cone(t_elem *elem);
void		aff_cord(t_cord *cord);
void		aff_cylindre(t_elem * elem);
void		aff_eye(t_eye *eye);
void		aff_map(t_map *map);
void		aff_obj(t_elem *elem);
void		aff_plan(t_elem *elem);
void		aff_sphere(t_elem *elem);
void		aff_spot(t_list *spot);
/*
**		makes
*/
t_elem		*make_sphere(t_list *list);
t_elem		*make_cone(t_list *list);
t_elem		*make_cylindre(t_list *list);
t_elem		*make_plan(t_list *list);
t_elem		*make_spot(t_list *list);
t_eye		*make_eye(t_list *list, t_map *map);
t_map		*make_map(t_list *list);
/*
**		inits
*/
t_token		*init_token();
t_key		*init_enum();
t_cord		*init_cord(double x, double y, double z);
t_sphere	*init_sphere(t_cord *cord, t_cord *rot, int r, int c);
t_cone		*init_cone(t_cord *cord, t_cord *rot, int r, int s, int c);
t_cylindre	*init_cylindre(t_cord *cord, t_cord *rot, int r, int s, int c);
t_plan		*init_plan(t_cord *cord, t_cord *rot, int c);
t_spot		*init_spot(t_cord *cord, t_cord *rot, int c);
t_eye		*init_eye(t_cord *cord, t_cord *rot);
t_map		*init_map();

#endif		/* EPICEDITOR_H_ */
