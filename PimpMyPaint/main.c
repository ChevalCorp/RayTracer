#include	"pmp.h"

int		main(int ac, char **av, char **env)
{
  int		n;

  n = 0;
  if (env[0] == NULL)
    printf("[ERROR] : Environment is empty\n");
  if (ac > 1)
    {
      while (av[++n] != NULL)
	printf("%s !!!\n", av[n]);
      printf("[ERROR] : This program doesn't take any argument\n");
    }
  if (ac == 1 && env[0] != NULL)
    pmp();
  return (0);
}
