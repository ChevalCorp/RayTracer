/*
** c_list.h for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 03:48:29 2014 Olivier Remy
** Last update Sun May 11 21:44:52 2014 Olivier Remy
*/

#ifndef		CLIST_H_
# define	CLIST_H_

typedef	struct	s_elem
{
  void		*data;
  struct s_elem	*next;
  struct s_elem	*prev;
}		t_elem;

typedef	struct	s_list
{
  int		length;
  t_elem	*first;
  t_elem	*last;
}		t_list;

t_list		*str_to_linelist(const int fd);
t_list		*create_list(char **av);
t_list		*init_list();
t_elem		*init_elem(void	*data);
void		free_list(t_list *list);
void		add_elem(t_list *list, t_elem *elem);
void		aff_list(t_list *list);

#endif /* CLIST_H_ */
