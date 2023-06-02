##
## EPITECH PROJECT, 2023
## giantman
## File description:
## Makefile
##

SRC 	=	main.c		\
		decompress_image.c	\
		helper.c	\
		helper2.c	\
		get.c	\
		get2.c	\
		free.c	\
		custom_strtok.c	\
		custom_strtok2.c	\
		decompress_txt.c	\
		lz_d.c	\
		decompress_html.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	+=	 -Wall -Wextra -I ../include

NAME = giantman

INSERT_LIB	=	-L ../lib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o ./$(NAME) $(SRC) $(INSERT_LIB) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:	clean
	rm -f ./$(NAME)
