/*
** EPITECH PROJECT, 2025
** unit tests
** File description:
** tests
*/

#include <criterion/criterion.h>
#include "../include/my.h"
#include <stdio.h>

Test(my_printf, simple_string_return)
{
    cr_assert_eq(my_printf("hello world"), printf("hello world"));
}

Test(my_printf, s_flag_return)
{
    char str[6] = "world";

    cr_assert_eq(my_printf("Hello %s", str), printf("Hello %s", str));
}

Test(myprintf, empty_string_return)
{
    cr_assert_eq(my_printf(""), printf(""));
}

Test(my_printf, c_flag_return)
{
    cr_assert_eq(my_printf("Hello %c\n", 'a'), printf("Hello %c\n", 'a'));
}

Test(my_printf, o_flags_return)
{
    int nb = 670;

    cr_assert_eq(my_printf("The octal of %d is %o\n", nb, nb), printf("The octal of %d is %o\n", nb, nb));
}

Test(my_printf, d_and_i_flags_return)
{
    int nb = 21;

    cr_assert_eq(my_printf("If you multiple %d by %d, the result is %i.\n", nb, 2, nb * 2), printf("If you multiple %d by %d, the result is %i.\n", nb, 2, nb * 2));
}

Test(my_printf, percentages_flags_return)
{
    char str[8] = "Epitech";

    cr_assert_eq(my_printf("The word %%%s%% has %i characters.\n", str, my_strlen(str)), printf("The word %%%s%% has %i characters.\n", str, my_strlen(str)));
}

Test(my_printf, x_and_X_flags_return)
{
    int nb = 810;

    cr_assert_eq(my_printf("The hexadecimal of %d is %x or %X\n", nb, nb, nb), printf("The hexadecimal of %d is %x or %X\n", nb, nb, nb));
}

Test(my_printf, u_flags_return)
{
    int nb = -673541635;

    cr_assert_eq(my_printf("The unsigned of %d is %u\n", nb, nb), printf("The unsigned of %d is %u\n", nb, nb));
}

Test(my_printf, f_and_F_flags_return)
{
    double nb1 = 87.25;
    double nb2 = -87.25;
    double nb3 = 0.0025;

    cr_assert_eq(my_printf("The float of is %f or %F or %f or %f\n", nb1, nb1, nb2, nb3), printf("The float of is %f or %F or %f or %f\n", nb1, nb1, nb2, nb3));
}

Test(my_printf, e_and_E_flags_return)
{
    double nb2 = -87.25;
    double nb3 = 0.00025;
    double nb4 = -0.00;
    double nb5 = 0.00;

    cr_assert_eq(my_printf("%e, %E, %e, %E, %e, %E, %e, %E", nb2, nb2, nb3, nb3, nb5, nb5, nb4, nb4), printf("%e, %E, %e, %E, %e, %E, %e, %E", nb2, nb2, nb3, nb3, nb5, nb5, nb4, nb4));
}

Test(my_printf, a_and_A_flags_return)
{
    double nb = 258.14;
    double nb1 = -258.14;
    double nb2 = 0.00258;

    cr_assert_eq(my_printf("The hexa is %a or %A, %a, %A, %a, %A\n", nb, nb, nb1, nb1, nb2, nb2), printf("The hexa is %a or %A, %a, %A, %a, %A\n", nb, nb, nb1, nb1, nb2, nb2));
}

Test(my_printf, g_and_G_flags_return)
{
    double nb = 0.00;
    double nb1 = -1578964.25;
    double nb2 = 0.000000182859;
    double nb3 = -214.25;
    double nb4 = 0.0258;

    cr_assert_eq(my_printf("%g, %G, %g, %G, %g, %G, %g, %G, %g, %G\n", nb, nb, nb1, nb1, nb2, nb2, nb3, nb3, nb4, nb4), printf("%g, %G, %g, %G, %g, %G, %g, %G, %g, %G\n", nb, nb, nb1, nb1, nb2, nb2, nb3, nb3, nb4, nb4));
}

Test(my_printf, lot_of_arguments_and_percentages_return)
{
    char str[8] = "Epitech";

    cr_assert_eq(my_printf("The word %%%s%% has %i characters.\n", str, my_strlen(str)), printf("The word %%%s%% has %i characters.\n", str, my_strlen(str)));
}

Test(my_printf, p_flags_return)
{
    void *ptr;

    cr_assert_eq(my_printf("%p\n", ptr), my_printf("%p\n", ptr));
}

