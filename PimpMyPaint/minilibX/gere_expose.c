#include	"minilibx.h"

int		gere_expose(t_mlx *mlx)
{
  mlx_put_image_to_window(mlx->mlx_ptr, mlx->win_ptr, mlx->img, 0, 0);
  return (0);
}
