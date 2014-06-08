/*
** set_buttons2.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Fri Jun  6 18:48:12 2014 Valentin Cardon
** Last update Sun Jun  8 18:58:53 2014 Maxime
*/

#include	"header.h"

void		button_ray(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.rayon = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.rayon = (char *) stext;
  g_list_free(plist);
}

void		button_size(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.size = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.size = (char *) stext;
  g_list_free(plist);
}

void		button_ang(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.angle = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.angle = (char *) stext;
  g_list_free(plist);
}
