##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## Makefile
##

SRC =	my_printf.c

OBJ =	$(SRC:.c=.o)

NAME =	cat

all:	$(NAME)

$(NAME):	$(OBJ)
	cd ../lib/my && $(MAKE)
	epiclang -o $(NAME) $(OBJ) -L../lib -lmy

clean:
	rm -f *.o
	rm -f *.gcno
	rm -f *.gcda
	rm -f '#*#'
	rm -f *~

fclean: clean
	rm -f $(NAME)

tests_run:	clean
	epiclang -o unit_test --coverage -lcriterion -lgcov ./tests/test_my_printf.c my_printf.c -L./lib -lmy
	./unit_test
	gcovr --gcov-executable "llvm-cov-20 gcov"

re:	fclean all
