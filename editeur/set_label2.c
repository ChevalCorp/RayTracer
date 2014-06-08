/*
** set_label2.c for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2/clone/RayTracer/editeur
** 
** Made by Valentin Cardon
** Login   <cardon_v@epitech.net>
** 
** Started on  Sun Jun  8 20:43:08 2014 Valentin Cardon
** Last update Sun Jun  8 20:48:13 2014 Valentin Cardon
*/

#include	"header.h"

void		label_rota(GtkWidget *ptable)
{
  GtkWidget	*plabelrx;
  GtkWidget	*plabelry;
  GtkWidget	*plabelrz;

  plabelrx = gtk_label_new("rota X");
  plabelry = gtk_label_new("rota Y");
  plabelrz = gtk_label_new("rota Z");
  gtk_table_attach_defaults(GTK_TABLE(ptable), plabelrx,
			    1, 2, 9, 10);
  gtk_table_attach_defaults(GTK_TABLE(ptable), plabelry,
			    3, 4, 9, 10);
  gtk_table_attach_defaults(GTK_TABLE(ptable), plabelrz,
			    5, 6, 9, 10);

}
