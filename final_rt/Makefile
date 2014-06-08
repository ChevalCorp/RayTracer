##
## Makefile for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
## 
## Made by marc-aurele lautel
## Login   <lautel_m@epitech.net>
## 
## Started on  Mon Feb 24 11:20:34 2014 marc-aurele lautel
## Last update Sun Jun  8 23:27:38 2014 Antoine Favarel
##

NAME=	rtv1

CC=	gcc

CFLAGS=		-Wall -Wextra

LDFLAGS=	-L /usr/lib -lmlx -L /usr/lib/X11 -lXext -lX11 -lm -lpthread -D_REENTRANT

SRC=	list_double.c	\
	set_obj.c	\
	init_eyes.c	\
	set_add.c	\
	get_next_line.c	\
	my_getnbr.c	\
	my_strlen.c	\
	my_strcmp.c	\
	my_puts.c	\
	pixel_func.c	\
	base_rt_func.c	\
	expose_func.c	\
	inter_plan.c	\
	inter_sphere.c	\
	inter_cone.c	\
	inter_cyl.c	\
	calc_vec_and_norm.c	\
	give_me_light.c	\
	select_true_vec.c	\
	main.c

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) $(LDFLAGS)

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re:	fclean all
