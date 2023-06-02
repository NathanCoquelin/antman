##
## EPITECH PROJECT, 2023
## antman
## File description:
## Makefile
##

SRC 	=	main.c		\
		compress_image.c\
		helper.c	\
		helper2.c	\
		helper3.c	\
		get.c		\
		my_strcat_antman.c	\
		free.c		\
		get_lz.c	\
		compress_txt.c	\
		compress_html.c	\

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	 -Wall -Wextra -I ../include

NAME = antman

INSERT_LIB	=	-L ../lib/my -lmy

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o ./$(NAME) $(SRC) $(INSERT_LIB) $(CFLAGS)

clean:
		rm -f $(OBJ)

fclean:	clean
	rm -f ./$(NAME)
