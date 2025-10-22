##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC =	my_printf.c \
	initialize.c \
	flags/flags_hexa.c \
	flags/flags_ints.c \
	flags/flags_e.c \
	flags/flags_g.c \
	flags/flags.c \
	flags/flags_others.c \
	lib/my_putchar.c \
	lib/my_put_nbr.c \
	lib/my_strlen.c \
	lib/my_intlen.c \
	my_put_error.c \
	lib/my_putstr.c

OBJ =	$(SRC:.c=.o)

NAME =	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o
	rm -f *.gcno
	rm -f *.gcda
	rm -f '#*#'
	rm -f *~

fclean:	clean
	rm -f $(NAME)
	rm -f unit_tests

tests_run:
	epiclang -o unit_tests --coverage -lcriterion -lgcov ./tests/test_print_my_printf.c $(SRC)
	./unit_tests
	epiclang -o unit_tests --coverage -lcriterion -lgcov ./tests/test_return_my_printf.c $(SRC)
	./unit_tests

gcovrex:	tests_run
	gcovr --gcov-executable "llvm-cov-20 gcov"
	gcovr --branches --gcov-executable "llvm-cov-20 gcov"

re:	fclean all
