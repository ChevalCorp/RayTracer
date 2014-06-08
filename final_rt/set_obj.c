/*
** set_obj.c for rt in /home/lautel_m/Documents/2013_rtv1_test
** 
** Made by marc-aurele lautel
** Login   <lautel_m@epitech.net>
** 
** Started on  Sat May 31 20:00:14 2014 marc-aurele lautel
** Last update Sat May 31 20:00:40 2014 marc-aurele lautel
*/

#include	"rtv1.h"

void            set_obj(t_rtv1 *rt, int fd)
{
  t_obj         *tmp;
  char          *str;

  tmp = rt->start;
  while ((str = read_line(fd)))
    {
      if (my_strcmp("##", str) == 1)
        tmp = tmp->next;
      else
        {
          if (str[6] == ' ')
            {
              my_putstr("champ vide dans conf.cf\n");
              exit(1);
            }
          else if (my_strcmp("TYPE= ", str) == 1)
            addtype(str, 6, tmp);
          else if (my_strcmp("COOR= ", str) == 1)
            addcoor(str, 6, tmp);
          else if (my_strcmp("COLO= ", str) == 1)
            addcolo(str, 6, tmp);
          else if (my_strcmp("ROTA= ", str) == 1)
            addrota(str, 6, tmp);
          else if (my_strcmp("RAYO= ", str) == 1)
            addrayo(str, 6, tmp);
        }
    }
}
