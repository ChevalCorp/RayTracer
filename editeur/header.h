/*
** header.h for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Wed Jun  4 17:26:34 2014 Valentin Cardon
** Last update Sun Jun  8 20:04:39 2014 Maxime
*/

#ifndef		_HEADER_H_
# define       	_HEADER_H_

# include	<gtk/gtk.h>
# include	<stdlib.h>
# include	<stdio.h>

typedef	struct	s_struct
{
  char		*obj;
  char		*x;
  char		*y;
  char		*z;
  char		*rx;
  char		*ry;
  char		*rz;
  char		*rayon;
  char		*size;
  char		*angle;
  char		*color;
}		t_struct;

t_struct	s_data;

int		my_strlen(char *str);
char		*my_strcpy(char *str, const char *src);
int		my_strcmp(char *s1, char *s2);
void		*xmalloc(int size);
void		clean_file();
void		put_str_in_file(char *str);
char		*write_rotation(t_struct data, char *str, int i);
char		*write_coord(t_struct data, char *str, int i);
char		*write_data(char *data, char *str, int i);
char		*write_data_end(char *data, char *str, int i);
void		write_object();
void		fill_struct();
void		write_and_quit();
void		*set_window();
void		*set_table(GtkWidget *pwindow);
void		set_entry(GtkWidget *ptable);
void		set_label(GtkWidget *plabel);
void		entry_obj(GtkWidget *ptable);
void		entry_posx(GtkWidget *ptable);
void		entry_posy(GtkWidget *ptable);
void		entry_posz(GtkWidget *ptable);
void		entry_ray(GtkWidget *ptable);
void		entry_size(GtkWidget *ptable);
void		entry_ang(GtkWidget *ptable);
void		entry_color(GtkWidget *ptable);
void		button_valid(GtkWidget *ptable);
void		button_valid(GtkWidget *ptable);
void		on_quit_button(GtkWidget *widget, gpointer data);
void		button_obj(GtkWidget *pbutton, gpointer data);
void		button_posx(GtkWidget *pbutton, gpointer data);
void		button_posy(GtkWidget *pbutton, gpointer data);
void		button_posz(GtkWidget *pbutton, gpointer data);
void		button_ray(GtkWidget *pbutton, gpointer data);
void		button_size(GtkWidget *pbutton, gpointer data);
void		button_ang(GtkWidget *pbutton, gpointer data);
void		button_color(GtkWidget *pbutton, gpointer data);

#endif		/*!HEADER_H_*/
