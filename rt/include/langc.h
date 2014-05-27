/*
** langc.h for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy/include
**
** Made by Olivier Remy
** Login   <remy_o@epitech.net>
**
** Started on  Sun May 11 04:59:13 2014 Olivier Remy
** Last update Sun May 11 19:50:31 2014 Olivier Remy
*/

#ifndef		LANGC_H_
# define	LANGC_H_

# include	"c_list.h"
# include	<sys/stat.h>
# include	<fcntl.h>
# include	<sys/types.h>
# include	<unistd.h>
# include	<stdlib.h>
# include	<unistd.h>

char		*c_getnextline(const int fd);
char		*c_strdump(char *src, char c);
char		*c_strcpy(char *src, char *cpy, char c);
void		*c_realloc(void *str, size_t size);
void		*c_malloc(size_t size);
int		c_open(const char *pathname, int flags);
int		c_strequal(char *str, char *cmp);
int		c_strcmp(char *str, char *cmp);
int		c_getnbr(char *str);
int		c_strlen(char *str, char c);
void		c_putinfo(char *mess);
void		c_puterror(char *mess);
void		c_putnbr(int nbr);
void		c_puttab(char **tab);
void		c_putstr(char *str);
void		c_wristr(char *str, int fd);
void		c_putchar(char c);
void		c_wrichar(char c, int fd);

#endif /* LANGC_H_ */
