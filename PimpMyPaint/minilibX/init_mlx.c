#include	"minilibx.h"

t_mlx		*init_mlx()
{
  t_mlx		*mlx;

  if ((mlx = malloc(sizeof(t_mlx))) == NULL)
    exit(0);
  mlx->xwin = 1900;
  mlx->ywin = 1000;
  mlx->mlx_ptr = mlx_init();
  mlx->img = mlx_new_image(mlx->mlx_ptr, mlx->xwin, mlx->ywin);
  return (mlx);
}
