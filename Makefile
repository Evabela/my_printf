##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC =	my_printf.c \
	flags.c \
	my_putchar.c \
	my_put_nbr.c \
	my_strlen.c \
	my_intlen.c \
	my_put_error.c \
	my_putstr.c

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
	epiclang -o $(NAME) $(OBJ)

tests_run:
	epiclang -o unit_tests --coverage -lcriterion -lgcov ./tests/test_my_printf.c $(SRC)
	./unit_tests

gcovrex:	tests_run
	gcovr --gcov-executable "llvm-cov-20 gcov"

clean:
	rm -f *.o
	rm -f *.gcno
	rm -f *.gcda
	rm -f '#*#'
	rm -f *~

fclean: clean
	rm -f $(NAME)

re:	fclean all
