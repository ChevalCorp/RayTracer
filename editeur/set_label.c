/*
** set_label.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Thu Jun  5 20:05:54 2014 Valentin Cardon
** Last update Sun Jun  8 19:39:32 2014 Maxime
*/

#include	"header.h"

void		label_obj(GtkWidget *ptable)
{
  GtkWidget	*plabel;

  plabel = gtk_label_new("Objet");
  gtk_table_attach_defaults(GTK_TABLE(ptable), plabel,
			  0, 1, 1, 2);
}

void		label_pos(GtkWidget *ptable)
{
  GtkWidget	*plabelx;
  GtkWidget	*plabely;
  GtkWidget	*plabelz;

  plabelx = gtk_label_new("Pos X");
  plabely = gtk_label_new("Pos Y");
  plabelz = gtk_label_new("Pos Z");
  gtk_table_attach_defaults(GTK_TABLE(ptable), plabelx,
			    0, 1, 3, 4);
  gtk_table_attach_defaults(GTK_TABLE(ptable), plabely,
			    0, 1, 5, 6);
  gtk_table_attach_defaults(GTK_TABLE(ptable), plabelz,
			    0, 1, 7, 8);

}

void		label_oth(GtkWidget *ptable)
{
  GtkWidget	*rayon;
  GtkWidget	*size;
  GtkWidget	*ang;

  rayon = gtk_label_new("Rayon");
  size = gtk_label_new("Size");
  ang = gtk_label_new("Angle");
  gtk_table_attach_defaults(GTK_TABLE(ptable), rayon,
			    6, 7, 3, 4);
  gtk_table_attach_defaults(GTK_TABLE(ptable), size,
			    6, 7, 5, 6);
  gtk_table_attach_defaults(GTK_TABLE(ptable), ang,
			    6, 7, 7, 8);
}

void		label_color(GtkWidget *ptable)
{
  GtkWidget	*color;

  color = gtk_label_new("Couleur");
  gtk_table_attach_defaults(GTK_TABLE(ptable), color,
			    0, 1, 10, 11);
}

void		set_label(GtkWidget *ptable)
{
  label_obj(ptable);
  label_pos(ptable);
  label_oth(ptable);
  label_color(ptable);
}
