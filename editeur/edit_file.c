/*
** edit_file.c for editor in /home/nory_m/Documents/Projets/raytracer
** 
** Made by Maxime
** Login   <nory_m@epitech.net>
** 
** Started on  Thu Jun  5 01:36:21 2014 Maxime
** Last update Sun Jun  8 20:07:39 2014 Maxime
*/

#include	"header.h"

void		clean_file()
{
  FILE		*fd;

  if ((fd = fopen("cnf", "w")) == NULL)
    {
      printf("Cannot open file\n");
      exit(1);
    }
  if (fd != 0)
    printf("File cleaned\n");
  fclose(fd);
}

void		put_str_in_file(char *str)
{
  FILE		*fd;

  if ((fd = fopen("cnf", "a")) == NULL)
    {
      printf("Cannot open file\n");
      exit(1);
    }
  if (fwrite(str, sizeof(char) * my_strlen(str), 1, fd) == 0)
    {
      printf("Cannot write in file\n");
      exit(1);
    }
  if (fwrite("\n", 1, 1, fd) == 0)
    {
      printf("Cannot write in file\n");
      exit(1);
    }
  fclose(fd);
}

char		*write_rotation(t_struct data, char *str, int i)
{
 int		k;

  k = 0;
  while (data.rx[k])
    str[i++] = data.rx[k++];
  k = 0;
  str[i++] = '|';
  while (data.ry[k])
    str[i++] = data.ry[k++];
  k = 0;
  str[i++] = '|';
  while (data.rz[k])
    str[i++] = data.rz[k++];
  str[i++] = '|';
  str[i] = '\0';
  return (str);
}

char		*write_coord(t_struct data, char *str, int i)
{
  int		k;

  k = 0;
  str[i++] = '|';
  while (data.x[k])
    str[i++] = data.x[k++];
  k = 0;
  str[i++] = '|';
  while (data.y[k])
    str[i++] = data.y[k++];
  k = 0;
  str[i++] = '|';
  while (data.z[k])
    str[i++] = data.z[k++];
  str[i++] = '|';
  str = write_rotation(data, str, i++);
  return (str);
}
