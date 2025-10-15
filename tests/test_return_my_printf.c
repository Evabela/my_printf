/*
** EPITECH PROJECT, 2025
** unit tests
** File description:
** tests
*/

#include <criterion/criterion.h>
#include "../include/my.h"
#include <stdio.h>

Test(my_printf, simple_string)
{
    cr_assert_eq(my_printf("hello world"), printf("hello world"));
}

Test(my_printf, one_argument)
{
    char str[6] = "world";

    cr_assert_eq(my_printf("Hello %s", str), printf("Hello %s", str));
}

Test(my_printf, more_argument)
{
    int nb = 21;

    cr_assert_eq(my_printf("If you multiple %d by %d, the result is %i.", nb, 2, nb * 2), printf("If you multiple %d by %d, the result is %i.", nb, 2, nb * 2));
}

Test(my_printf, lot_of_arguments_and_percentages)
{
    char str[8] = "Epitech";

    cr_assert_eq(my_printf("The word %%%s%% has %i characters.\n", str, my_strlen(str)), printf("The word %%%s%% has %i characters.\n", str, my_strlen(str)));
}
/*
Test(my_printf, invalid_flag)
{
    char str[8] = "Epitech";

    cr_assert_eq(my_printf("The word %%%s%% has %k characters.\n", str), printf("The word %%%s%% has %k characters.\n", str));
}

Test(mini_printf, percentage_alone)
{
    char str[8] = "Epitech";

    cr_assert_eq(my_printf("The word %%%s%% has % characters.\n", str), printf("The word %%%s%% has % characters.\n", str));
}
*/
