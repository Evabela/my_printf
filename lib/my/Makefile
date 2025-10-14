##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC =	my_put_nbr.c		\
	my_strcat.c		\
	my_strcpy.c		\
	my_strlen.c		\
	my_str_to_word_array.c	\
	my_getnbr.c		\
	my_putchar.c		\
	my_putstr.c		\
	my_show_word_array.c	\
	my_strcmp.c		\
	my_strdup.c		\
	my_get_first_nbr.c	\
	my_strstr.c		\
	my_swap.c

OBJ = 	$(SRC:.c=.o)

NAME = 	libmy.a

all: 	$(NAME)

$(NAME):	$(OBJ)
	cp my.h ../../include
	ar rc $(NAME) $(OBJ)
	cp $(NAME) ..

clean:
	rm -f *.o
	rm -f '#*#'
	rm -f *~

fclean: clean
	rm -f $(NAME)
	cd .. && rm -f $(NAME)

re:	fclean all

