/*
** parsing_conf.c for rtv1 in /home/lautel_m/Documents/epitech_2018/Igraph/rtv1
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Sun Mar 16 10:21:54 2014 marc-aurele lautel
** Last update Sat May 31 20:02:30 2014 marc-aurele lautel
*/

#include	"rtv1.h"

void		addrota(char *str, int i, t_obj *tmp)
{
}

void            addrayo(char *str, int i, t_obj *tmp)
{
  char          *nb;
  int           temp;
  int           j;

  temp = i;
  j = 0;
  nb = malloc(sizeof(char) * 7);
  while (str[temp] != ';')
    nb[j++] = str[temp++];
  nb[j] = '\0';
  tmp->R = (double)my_getnbr(nb);
}

void		addcolo(char *str, int i, t_obj *tmp)
{
  char		*nb;
  int		temp;
  int		j;
  int		pos;

  tmp->color = malloc(sizeof(t_color));
  pos = 0;
  temp = i;
  j = 0;
  while (pos < 3)
    {
      nb = malloc(sizeof(char) * 7 + 1);
      while (str[temp] != ';')
	nb[j++] = str[temp++];
      nb[j] = '\0';
      pos++;
      if (pos == 1)
	tmp->color->b = my_getnbr(nb);
      else if (pos == 2)
	tmp->color->v = my_getnbr(nb);
      else if (pos == 3)
	tmp->color->r = my_getnbr(nb);
      temp++;
      j = 0;
    }
}

/*
tmp->eye est bien mal nommé : se sont en réalité les coordonné de l'objet
*/
void		addcoor(char *str, int i, t_obj *tmp)
{
  char		*nb;
  int		temp;
  int		j;
  int		pos;

  tmp->eye = malloc(sizeof(t_eye));
  pos = 0;
  temp = i;
  j = 0;
  while (pos < 3)
    {
      nb = malloc(sizeof(char) * 7 + 1);
      while (str[temp] != ';')
	nb[j++] = str[temp++];
      nb[j] = '\0';
      pos++;
      if (pos == 1)
	tmp->eye->xeye = my_getnbr(nb);
      else if (pos == 2)
	tmp->eye->yeye = my_getnbr(nb);
      else if (pos == 3)
	tmp->eye->zeye = my_getnbr(nb);
      temp++;
      j = 0;
    }
}

void		addtype(char *str, int i, t_obj *tmp)
{
  if (my_strcmp2("plan;", str, i) == 1)
    tmp->type = 0;
  else if (my_strcmp2("sphere;", str, i) == 1)
    tmp->type = 1;
  else if (my_strcmp2("cone;", str, i) == 1)
    tmp->type = 2;
  else if (my_strcmp2("cylindre;", str, i) == 1)
    tmp->type = 3;
}
