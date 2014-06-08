/*
** set_entry2.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Thu Jun  5 19:50:39 2014 Valentin Cardon
** Last update Sun Jun  8 19:01:40 2014 Maxime
*/

#include	"header.h"

void		entry_ray(GtkWidget *ptable)
{
  GtkWidget	*pentry;
  GtkWidget	*pvbox;
  GtkWidget	*pvbox2;
  GtkWidget	*pbutton;

  pentry = gtk_entry_new();
  pvbox = gtk_vbox_new(TRUE, 0);
  pvbox2 = gtk_vbox_new(TRUE, 0);
  pbutton = gtk_button_new_with_label("ok");
  gtk_box_pack_start(GTK_BOX(pvbox), pentry, TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(pvbox2), pbutton, TRUE, TRUE, 0);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox,
			    5, 6, 3, 4);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
  			    4, 5, 3, 4);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_ray), (GtkWidget*) pvbox);
}

void		entry_size(GtkWidget *ptable)
{
  GtkWidget	*pentry;
  GtkWidget	*pvbox;
  GtkWidget	*pvbox2;
  GtkWidget	*pbutton;

  pentry = gtk_entry_new();
  pvbox = gtk_vbox_new(TRUE, 0);
  pvbox2 = gtk_vbox_new(TRUE, 0);
  pbutton = gtk_button_new_with_label("ok");
  gtk_box_pack_start(GTK_BOX(pvbox), pentry, TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(pvbox2), pbutton, TRUE, TRUE, 0);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox,
			    5, 6, 5, 6);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
			    4, 5, 5, 6);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_size), (GtkWidget*) pvbox);
}

void		entry_ang(GtkWidget *ptable)
{
  GtkWidget	*pentry;
  GtkWidget	*pvbox;
  GtkWidget	*pvbox2;
  GtkWidget	*pbutton;

  pentry = gtk_entry_new();
  pvbox = gtk_vbox_new(TRUE, 0);
  pvbox2 = gtk_vbox_new(TRUE, 0);
  pbutton = gtk_button_new_with_label("ok");
  gtk_box_pack_start(GTK_BOX(pvbox2), pbutton, TRUE, TRUE, 0);
  gtk_box_pack_start(GTK_BOX(pvbox), pentry, TRUE, TRUE, 0);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox,
			    5, 6, 7, 8);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
			    4, 5, 7, 8);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_ang), (GtkWidget*) pvbox);
}
