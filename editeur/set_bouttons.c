/*
** set_bouttons.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Fri Jun  6 16:55:48 2014 Valentin Cardon
** Last update Sun Jun  8 19:43:40 2014 Maxime
*/

#include	"header.h"

void		button_obj(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.obj = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.obj = (char *) stext;
  g_list_free(plist);
}

void		button_posx(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.x = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.x = (char *) stext;
  g_list_free(plist);
}

void		button_posy(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.y = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.y = (char *) stext;
  g_list_free(plist);
}

void		button_posz(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.z = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.z = (char *) stext;
  g_list_free(plist);
}

void		button_color(GtkWidget *pbutton, gpointer data)
{
  const char	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.color = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.color = (char *) stext;
  g_list_free(plist);
}
