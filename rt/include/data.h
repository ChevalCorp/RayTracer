/*
** data.h for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 03:30:58 2014 Olivier Remy
** Last update Mon May 26 19:54:56 2014 Olivier Remy
*/

#ifndef		DATA_H_
# define	DATA_H_

# include	"langc.h"

typedef	struct	s_key
{
  char		*key;
  t_elem	*(*func)(t_list *list);
}		t_key;

typedef	struct	s_cord
{
  int		pos_x;
  int		pos_y;
  int		pos_z;
}		t_cord;

typedef	struct	s_sphere
{
  t_cord	*cord;
  int		rayon;
  int		color;
}		t_sphere;

typedef	struct	s_cone
{
  t_cord	*cord;
  int		rayon;
  int		size;
  int		color;
}		t_cone;

typedef	struct	s_cylindre
{
  t_cord	*cord;
  int		rayon;
  int		size;
  int		color;
}		t_cylindre;

typedef	struct	s_plan
{
  t_cord	*cord;
  int		color;
}		t_plan;

typedef	struct	s_projo
{
  t_cord	*cord;
  int		color;
}		t_projo;

typedef	struct	s_eye
{
  t_cord	*cord;
  float		angl;
}		t_eye;

typedef	struct	s_map
{
  t_eye		*eye;
  t_list	*obj;
}		t_map;

# include	"langc.h"

#endif /* DATA_H_ */
