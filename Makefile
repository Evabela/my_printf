##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC =	my_printf.\
	my_putchar.c \
	my_put_nbr.c \
	my_putstr.c

OBJ =	$(SRC:.c=.o)

NAME =	cat

all:	$(NAME)

$(NAME):	$(OBJ)
	cd ../lib/my && $(MAKE)
	epiclang -o $(NAME) $(OBJ) -L../lib -lmy

tests_run:
	epiclang -o unit_tests --coverage -lcriterion -lgcov ./tests/test_my_printf.c my_printf.c -L../lib -lmy
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
