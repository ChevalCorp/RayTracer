##
## Makefile for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy
## 
## Made by Olivier Remy
## Login   <remy_o@epitech.net>
## 
## Started on  Sun May 11 02:53:27 2014 Olivier Remy
## Last update Sun Jun  8 21:02:42 2014 Olivier Remy
##

NAME1		= epic_editor

SRC1		= main.c \
		src/epic_editor.c \
		src/check_enum.c \
		src/split_list.c \
		src/aff_cone.c \
		src/aff_cord.c \
		src/aff_cylindre.c \
		src/aff_eye.c \
		src/aff_map.c \
		src/aff_obj.c \
		src/aff_plan.c \
		src/aff_sphere.c \
		src/aff_spot.c \
		src/init_token.c \
		src/init_cone.c \
		src/init_cord.c \
		src/init_cylindre.c \
		src/init_enum.c \
		src/init_eye.c \
		src/init_map.c \
		src/init_plan.c \
		src/init_spot.c \
		src/init_sphere.c \
		src/make_cone.c \
		src/make_cylindre.c \
		src/make_eye.c \
		src/make_map.c \
		src/make_plan.c \
		src/make_spot.c \
		src/make_sphere.c

SRC4		= c_lib/str_to_linelist.c \
		c_lib/chose_elem.c \
		c_lib/init_elem.c \
		c_lib/init_list.c \
		c_lib/create_list.c \
		c_lib/free_list.c \
		c_lib/add_elem.c \
		c_lib/aff_list.c \
		c_lib/c_getnbr.c \
		c_lib/c_getnextline.c \
		c_lib/c_malloc.c \
		c_lib/c_open.c \
		c_lib/c_wrichar.c \
		c_lib/c_putchar.c \
		c_lib/c_puterror.c \
		c_lib/c_putinfo.c \
		c_lib/c_putnbr.c \
		c_lib/c_wristr.c \
		c_lib/c_putstr.c \
		c_lib/c_puttab.c \
		c_lib/c_realloc.c \
		c_lib/c_strcmp.c \
		c_lib/c_strcpy.c \
		c_lib/c_strdump.c \
		c_lib/c_strequal.c \
		c_lib/c_strlen.c

OBJ1		= $(SRC1:.c=.o)

OBJ4		= $(SRC4:.c=.o)

CC		= cc -g

CFLAGS		= -w -Wall -Wextra -pedantic -ansi -I include -g

RM		= rm -vf

all:		mobj $(NAME1)

mobj:		$(OBJ4)

$(NAME1):		$(OBJ1)
	$(CC) -o $(NAME1) $(OBJ1) $(OBJ4)

clean:
	$(RM) $(OBJ1) $(OBJ4)

fclean:	clean
	$(RM) $(NAME1)

re: fclean all

.PHONY: all clean fclean re
