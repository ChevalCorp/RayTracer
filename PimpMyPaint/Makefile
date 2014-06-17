NAME		= pmp

PATHSRC		= src/
PATHMLX		= minilibX/

SRC		= main.c \
		$(PATHSRC)pmp.c \
		$(PATHSRC)remplis_image.c \
		$(PATHMLX)gere_expose.c \
		$(PATHMLX)gere_key.c \
		$(PATHMLX)init_pxl.c \
		$(PATHMLX)init_mlx.c \
		$(PATHMLX)pixel_put_to_image.c

OBJ		= $(SRC:.c=.o)

CC		= cc

MATH		= -lm
MLX		= -L /usr/lib -lmlx -L /usr/lib/X11 -lXext -lX11
CFLAGS		= -w -Wall -Wextra -pedantic -ansi -I include

RM		= rm -rvf

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(MATH) $(MLX) $(CFLAGS)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all

.PHONY:		all clean fclean re
