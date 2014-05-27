##
## Makefile for epic_js_fantasy in /home/remy_o/rendu/epic_js_fantasy
## 
## Made by Olivier Remy
## Login   <remy_o@epitech.net>
## 
## Started on  Sun May 11 02:53:27 2014 Olivier Remy
## Last update Mon May 26 19:51:59 2014 Olivier Remy
##

NAME1		= epic_editor

SRC1		= main.c \
		parcer/epic_editor.c \
		parcer/init_cone.c \
		parcer/init_cord.c \
		parcer/init_cylindre.c \
		parcer/init_enum.c \
		parcer/init_eye.c \
		parcer/init_map.c \
		parcer/init_plan.c \
		parcer/init_projo.c \
		parcer/init_sphere.c \

SRC4		= c_lib/str_to_linelist.c \
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
