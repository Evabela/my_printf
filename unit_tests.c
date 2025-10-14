/*
** EPITECH PROJECT, 2025
** unit tests
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "./include/my.h"
#include <stdio.h>

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(mini_printf, simple_string, .init = redirect_all_std)
{
    mini_printf("hello world");
    cr_assert_stdout_eq_str(printf("hello world"));
}

Test(mini_printf, one_argument, .init = redirect_all_std)
{
    char str[6] = "world";

    mini_printf("Hello %s\n", str);
    cr_assert_stdout_eq_str("Hello world\n");
}

Test(mini_printf, more_argument, .init = redirect_all_std)
{
    int nb = 21;

    mini_printf("If you multiple %d by %d, the result is %i.\n", nb, 2, nb * 2);
    cr_assert_stdout_eq_str("If you multiple 21 by 2, the result is 42.\n");
}

Test(mini_printf, lot_of_arguments_and_percentages, .init = redirect_all_std)
{
    char str[8] = "Epitech";

    mini_printf("The word %%%s%% has %i characters.\n", str, my_strlen(str));
    cr_assert_stdout_eq_str("The word %Epitech% has 7 characters.\n");
}

Test(mini_printf, invalid_flag, .init = redirect_all_std)
{
    char str[8] = "Epitech";

    mini_printf("The word %%%s%% has %k characters.\n", str);
    cr_assert_stdout_eq_str("The word %Epitech% has %k characters.\n");
}

Test(mini_printf, percentage_alone, .init = redirect_all_std)
{
    char str[8] = "Epitech";

    mini_printf("The word %%%s%% has % characters.\n", str);
    cr_assert_stdout_eq_str("The word %Epitech% has  characters.\n");
}
