/*
** main.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Wed Jun  4 18:01:54 2014 Valentin Cardon
** Last update Sun Jun  8 18:27:41 2014 Maxime
*/

#include	<stdlib.h>
#include	"header.h"

void		write_and_quit()
{
  write_object();
  gtk_main_quit();
}

void		*set_window()
{
  GtkWidget	*pwindow;

  pwindow = gtk_window_new(GTK_WINDOW_TOPLEVEL);
  gtk_window_set_position(GTK_WINDOW(pwindow), GTK_WIN_POS_CENTER);
  gtk_window_set_default_size(GTK_WINDOW(pwindow), 900, 400);
  gtk_window_set_title(GTK_WINDOW(pwindow), "Edit-conf");
  g_signal_connect(G_OBJECT(pwindow), "destroy",
		   G_CALLBACK(gtk_main_quit), NULL);
  return(pwindow);
}

int		main(int ac, char **av)
{
  GtkWidget	*pwindow;
  GtkWidget	*ptable;

  s_data.obj = NULL;
  s_data.x = NULL;
  s_data.y = NULL;
  s_data.z = NULL;
  s_data.size = NULL;
  s_data.rayon = NULL;
  s_data.angle = NULL;
  s_data.color = NULL;
  gtk_init(&ac, &av);
  pwindow = set_window();
  ptable = set_table(pwindow);
  set_entry(ptable);
  set_label(ptable);
  gtk_widget_show_all(pwindow);
  gtk_main();
  return (EXIT_SUCCESS);
}
