#ifndef		MINILIBX_H_
# define	MINILIBX_H_

# include	"data.h"
# include	<math.h>

typedef	struct	s_pxl
{
  int		x;
  int		y;
  char		r;
  char		v;
  char		b;
}		t_pxl;

typedef	struct	s_mlx
{
  int		xwin;
  int		ywin;
  void		*mlx_ptr;
  void		*win_ptr;
  void		*img;
}		t_mlx;

typedef	struct	s_calc
{
  char		*data;
  int		bpp;
  int		sizeline;
  int		endian;
}		t_calc;

int		gere_expose(t_mlx *mlx);
int		gere_key(int keycode);
t_pxl		*init_pxl();
t_mlx		*init_mlx();
void		pixel_put_to_image(t_pxl *pxl, t_mlx *mlx);

#endif		/* !MINILIBX_H_ */
