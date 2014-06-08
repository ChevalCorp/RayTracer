/*
** set_entry.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Thu Jun  5 16:57:04 2014 Valentin Cardon
** Last update Sun Jun  8 20:37:26 2014 Valentin Cardon
*/

#include	"header.h"

void		entry_obj(GtkWidget *ptable)
{
  GtkWidget	*pentry;
  GtkWidget	*pvbox;
  GtkWidget	*pvbox2;
  GtkWidget	*pbutton;

  pentry = gtk_entry_new();
  pvbox = gtk_vbox_new(TRUE, 0);
  pvbox2 = gtk_vbox_new(TRUE, 0);
  pbutton = gtk_button_new_with_label("ok");
  gtk_box_pack_start(GTK_BOX(pvbox), pentry, TRUE, FALSE, 0);
  gtk_box_pack_start(GTK_BOX(pvbox2), pbutton, TRUE, FALSE, 0);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox,
			    1, 6, 1, 2);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
			    6, 7, 1, 2);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_obj), (GtkWidget*) pvbox);
}

void		entry_posx(GtkWidget *ptable)
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
			    1, 2, 3, 4);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
			    2, 3, 3, 4);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
 		   (button_posx), (GtkWidget*) pvbox);
}

void		entry_posy(GtkWidget *ptable)
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
			    1, 2, 5, 6);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
			    2, 3, 5, 6);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
  		   (button_posy), (GtkWidget*) pvbox);
}

void		entry_posz(GtkWidget *ptable)
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
			    1, 2, 7, 8);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
			    2, 3, 7, 8);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_posz), (GtkWidget *) pvbox);
}

void		entry_color(GtkWidget *ptable)
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
			    1, 6, 13, 14);
  gtk_table_attach_defaults(GTK_TABLE(ptable), pvbox2,
			    6, 7, 13, 14);
  g_signal_connect(G_OBJECT(pbutton), "clicked", G_CALLBACK
		   (button_color), (GtkWidget*) pvbox);
}
