/*
** set_table.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Thu Jun  5 16:18:00 2014 Valentin Cardon
** Last update Sun Jun  8 18:09:16 2014 Maxime
*/

#include	"header.h"

void		*set_table(GtkWidget *pwindow)
{
  GtkWidget	*ptable;

  ptable  = gtk_table_new(13, 7, TRUE);
  gtk_container_add(GTK_CONTAINER(pwindow), GTK_WIDGET(ptable));
  return(ptable);
}

void		button_quit(GtkWidget *ptable)
{
  GtkWidget	*pbutton;
  GtkWidget	*pvbox;

  pbutton = gtk_button_new_with_label("Valider et quitter");
  pvbox = gtk_vbox_new(TRUE, 0);
  gtk_box_pack_start(GTK_BOX(pvbox), pbutton, TRUE, TRUE, 0);
  g_signal_connect(G_OBJECT(pbutton),
		   "clicked", G_CALLBACK(write_and_quit),
		   (GtkWidget*) pvbox);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox,
			    1, 2, 12, 13);
}

void		button_valid(GtkWidget *ptable)
{
  GtkWidget	*pbutton;
  GtkWidget	*pvbox;

  pbutton = gtk_button_new_with_label("Réinitialiser les objets");
  pvbox = gtk_vbox_new(TRUE, 0);
  gtk_box_pack_start(GTK_BOX(pvbox), pbutton, TRUE, TRUE, 0);
  g_signal_connect(G_OBJECT(pbutton),
		   "clicked", G_CALLBACK(clean_file),
		   (GtkWidget*) pvbox);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox,
			    5, 6, 12, 13);
}

void		set_entry(GtkWidget *ptable)
{
  entry_obj(ptable);
  entry_posx(ptable);
  entry_posy(ptable);
  entry_posz(ptable);
  entry_ray(ptable);
  entry_size(ptable);
  entry_ang(ptable);
  entry_color(ptable);
  button_valid(ptable);
  button_quit(ptable);
}
