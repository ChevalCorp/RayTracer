#include	"pmp.h"

void		remplis_image(t_mlx *mlx, t_pxl *pxl)
{
  while (pxl->x < mlx->xwin)
    {
      printf("e\n");
      pxl->y = 0;
      while (pxl->y < mlx->ywin)
	{
	  printf("e\n");
	  pixel_put_to_image(pxl, mlx);
	  printf("e\n");
	  pxl->y++;
	}
      pxl->x++;
    }
}
