/*
** set_bouttons3.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2/clone/RayTracer/editeur
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Sun Jun  8 20:12:49 2014 Valentin Cardon
** Last update Sun Jun  8 20:16:06 2014 Valentin Cardon
*/

#include	"header.h"

void		button_rx(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.rx = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.rx = (char *) stext;
  g_list_free(plist);
}

void		button_ry(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.ry = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.ry = (char *) stext;
  g_list_free(plist);
}

void		button_rz(GtkWidget *pbutton, gpointer data)
{
  const gchar	*stext;
  GtkWidget	*ptmpentry;
  GList		*plist;

  plist = gtk_container_get_children(GTK_CONTAINER((GtkWidget*) data));
  ptmpentry = GTK_WIDGET(plist->data);
  plist = g_list_next(plist);
  plist = g_list_next(plist);
  stext = gtk_entry_get_text(GTK_ENTRY(ptmpentry));
  s_data.rz = xmalloc(sizeof(char) * my_strlen((char *) stext));
  s_data.rz = (char *) stext;
  g_list_free(plist);
}
