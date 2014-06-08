/*
** write_objects.c for editor in /home/nory_m/Documents/Projets/raytracer
** 
** Made by Maxime
** Login   <nory_m@epitech.net>
** 
** Started on  Thu Jun  5 01:02:11 2014 Maxime
** Last update Sun Jun  8 19:58:51 2014 Maxime
*/

#include	"header.h"

char		*write_data(char *data, char *str, int i)
{
  int		k;

  k = 0;
  while (data[k])
    str[i++] = data[k++];
  str[i] = '|';
  str[i + 1] = '\0';
  return (str);
}

char		*write_data_end(char *data, char *str, int i)
{
  int		k;

  k = 0;
  while (data[k])
    str[i++] = data[k++];
  str[i] = '\0';
  return (str);
}

void		fill_struct()
{
  if (s_data.obj == NULL)
    {
      printf("Error : No object name\n");
      exit(1);
    }
  if (s_data.x == NULL)
    s_data.x = "0";
  if (s_data.y == NULL)
    s_data.y = "0";
  if (s_data.z == NULL)
    s_data.z = "0";
  if (s_data.rayon == NULL)
    s_data.rayon = "0";
  if (s_data.size == NULL)
    s_data.size = "0";
  if (s_data.angle == NULL)
    s_data.angle = "0";
  if (s_data.color == NULL)
    s_data.color = "0";
  if (s_data.rx == NULL)
    s_data.rx = "0";
 if (s_data.ry == NULL)
    s_data.ry = "0";
 if (s_data.rz == NULL)
    s_data.rz = "0";
}

void		write_object()
{
  char		*str;

  fill_struct();
  str = xmalloc(sizeof(char) * (my_strlen(s_data.x) + my_strlen(s_data.y)
				+ my_strlen(s_data.z) + 2000));
  str = my_strcpy(str, s_data.obj);
  str = write_coord(s_data, str, my_strlen(str));
  if (my_strcmp(s_data.obj, "Sphere") == 0 ||
      my_strcmp(s_data.obj, "Cone") == 0 ||
      my_strcmp(s_data.obj, "Cylinder") == 0)
    str = write_data(s_data.rayon, str, my_strlen(str));
  if (my_strcmp(s_data.obj, "Cone") == 0 ||
      my_strcmp(s_data.obj, "Cylinder") == 0)
    str = write_data(s_data.size, str, my_strlen(str));
  if (my_strcmp(s_data.obj, "Eye") != 0)
    str = write_data_end(s_data.color, str, my_strlen(str));
  else
    str = write_data_end(s_data.angle, str, my_strlen(str));
  put_str_in_file(str);
}
