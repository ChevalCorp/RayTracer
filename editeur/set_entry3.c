/*
** set_entry3.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2/clone/RayTracer/editeur
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Sun Jun  8 20:18:31 2014 Valentin Cardon
** Last update Sun Jun  8 20:40:56 2014 Valentin Cardon
*/

#include	"header.h"

void		entry_rx(GtkWidget *ptable)
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
			    1, 2, 10, 11);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
  			    1, 2, 11, 12);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_rx), (GtkWidget*) pvbox);
}

void		entry_ry(GtkWidget *ptable)
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
			    3, 4, 10, 11);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
  			    3, 4, 11, 12);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_ry), (GtkWidget*) pvbox);
}

void		entry_rz(GtkWidget *ptable)
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
			    5, 6, 10, 11);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
  			    5, 6, 11, 12);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_rz), (GtkWidget*) pvbox);
}

