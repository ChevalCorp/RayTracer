#include	"minilibx.h"

void		pixel_put_to_image(t_pxl *pxl, t_mlx *mlx)
{
  int		pos;
  t_calc	*calc;

  if ((calc = malloc(sizeof(t_calc))) == NULL)
    exit(0);
  calc->data = mlx_get_data_addr(mlx->img, &calc->bpp,
                                &calc->sizeline, &calc->endian);
  pos = pxl->x * 4 + pxl->y * calc->sizeline;
  printf("lalala\n");
  calc->data[pos] = pxl->r;
  printf("lalala\n");
  calc->data[pos + 1] = pxl->v;
  calc->data[pos + 2] = pxl->b;
}
