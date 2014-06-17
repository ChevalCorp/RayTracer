#include	"minilibx.h"

t_pxl		*init_pxl()
{
  t_pxl		*pxl;

  if ((pxl = malloc(sizeof(t_pxl))) == NULL)
    exit(0);
  pxl->x = 0;
  pxl->y = 0;
  pxl->r = 0xFF;
  pxl->v = 0xFF;
  pxl->b = 0xFF;
  return (pxl);
}
