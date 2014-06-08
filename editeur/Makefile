##
## Makefile for edit-conf in /home/cardon_v/Documents/Tek-1/B02/Igraph/MUL_2013_raytracer/gtk/v2
## 
## Made by Valentin Cardon
## Login   <cardon_v@epitech.net>
## 
## Started on  Fri Jun  6 12:10:41 2014 Valentin Cardon
## Last update Sun Jun  8 20:54:49 2014 Maxime
##

NAME		=	Edit-conf

GTK		=	$(shell pkg-config --cflags --libs gtk+-2.0)

CC		=	gcc -lgthread-2.0

CFLAGS		=	$(GTK)

SRC		=	main.c		\
			set_entry.c	\
			set_entry2.c	\
			set_entry3.c	\
			set_table.c	\
			set_label.c	\
			set_label2.c	\
			set_bouttons.c	\
			set_bouttons2.c	\
			set_bouttons3.c	\
			my.c		\
			edit_file.c	\
			xmalloc.c	\
			write_objects.c

OBJ		=	$(SRC:.c=.o)

TMP		=	$(SRC:.c=.c~)

all		:	$(NAME)

$(NAME)		:	$(OBJ)
			@$(CC) -o $(NAME) $(OBJ) $(shell pkg-config --cflags --libs gtk+-2.0)
clean		:
			rm -rf $(OBJ) $(TMP)

fclean		:	clean
			rm -rf $(NAME)

re		:	fclean all