##
## Makefile for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy
## 
## Made by Olivier Remy
## Login   <remy_o@epitech.net>
## 
## Started on  Sun May 11 02:53:27 2014 Olivier Remy
## Last update Thu Jun  5 12:02:36 2014 Olivier Remy
##

NAME1		= rt

SRC1		= main.c \
		src/parser/epic_editor.c \
		src/parser/check_enum.c \
		src/parser/split_list.c \
		src/parser/aff_cone.c \
		src/parser/aff_cord.c \
		src/parser/aff_cylindre.c \
		src/parser/aff_eye.c \
		src/parser/aff_map.c \
		src/parser/aff_obj.c \
		src/parser/aff_plan.c \
		src/parser/aff_sphere.c \
		src/parser/aff_spot.c \
		src/parser/init_token.c \
		src/parser/init_cone.c \
		src/parser/init_cord.c \
		src/parser/init_cylindre.c \
		src/parser/init_enum.c \
		src/parser/init_eye.c \
		src/parser/init_map.c \
		src/parser/init_plan.c \
		src/parser/init_spot.c \
		src/parser/init_sphere.c \
		src/parser/make_cone.c \
		src/parser/make_cylindre.c \
		src/parser/make_eye.c \
		src/parser/make_map.c \
		src/parser/make_plan.c \
		src/parser/make_spot.c \
		src/parser/make_sphere.c

SRC4		= src/c_lib/str_to_linelist.c \
		src/c_lib/init_elem.c \
		src/c_lib/init_list.c \
		src/c_lib/create_list.c \
		src/c_lib/free_list.c \
		src/c_lib/add_elem.c \
		src/c_lib/aff_list.c \
		src/c_lib/c_getnbr.c \
		src/c_lib/c_getnextline.c \
		src/c_lib/c_malloc.c \
		src/c_lib/c_open.c \
		src/c_lib/c_wrichar.c \
		src/c_lib/c_putchar.c \
		src/c_lib/c_puterror.c \
		src/c_lib/c_putinfo.c \
		src/c_lib/c_putnbr.c \
		src/c_lib/c_wristr.c \
		src/c_lib/c_putstr.c \
		src/c_lib/c_puttab.c \
		src/c_lib/c_realloc.c \
		src/c_lib/c_strcmp.c \
		src/c_lib/c_strcpy.c \
		src/c_lib/c_strdump.c \
		src/c_lib/c_strequal.c \
		src/c_lib/c_strlen.c

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
