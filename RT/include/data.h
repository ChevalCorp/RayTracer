/*
** data.h for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 03:30:58 2014 Olivier Remy
** Last update Thu Jun  5 14:09:18 2014 Olivier Remy
*/

#ifndef		DATA_H_
# define	DATA_H_

# include	"langc.h"

# define	SPHERE 0x01
# define	CONE 0x02
# define	CYLINDRE 0x03
# define	PLAN 0x04
# define	SPOT 0x05

typedef	struct	s_token
{
  char		token;
  void		(*func)(t_elem *elem);
}		t_token;

typedef	struct	s_cord
{
  double	pos_x;
  double	pos_y;
  double	pos_z;
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

typedef	struct	s_spot
{
  t_cord	*cord;
  int		color;
}		t_spot;

typedef	struct	s_eye
{
  t_cord	*cord;
  float		angl;
}		t_eye;

typedef	struct	s_win
{
  int		winx;
  int		winy;
}		t_win;

typedef	struct	s_map
{
  t_win		*win;
  t_eye		*eye;
  t_list	*obj;
}		t_map;

#endif /* DATA_H_ */
