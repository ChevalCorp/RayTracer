##
## Makefile for rtv1 in /home/lautel_m/rendu/MUL_2013_rtv1
## 
## Made by marc-aurele lautel
## Login   <lautel_m@epitech.net>
## 
## Started on  Mon Feb 24 11:20:34 2014 marc-aurele lautel
## Last update Sun Jun  1 20:39:52 2014 Antoine Favarel
##

NAME=	rtv1

CC=	gcc

CFLAGS= -Wall -Wextra -g -I include

SRC=	src/list_double.c	\
	src/set_obj.c	\
	src/init_eyes.c	\
	src/set_add.c	\
	src/get_next_line.c	\
	src/my_getnbr.c	\
	src/my_strlen.c	\
	src/my_strcmp.c	\
	src/my_puts.c	\
	src/pixel_func.c	\
	src/base_rt_func.c	\
	src/expose_func.c	\
	src/inter_plan.c	\
	src/inter_sphere.c	\
	src/inter_cone.c	\
	src/inter_cyl.c	\
	src/main.c

OBJ=	$(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(OBJ) -L /usr/lib -lmlx -L /usr/lib/X11 -lXext -lX11 -lm -lpthread -D_REENTRANT

clean:
	rm -f $(OBJ)

fclean:
	rm -f $(OBJ) $(NAME)

re:	fclean all
