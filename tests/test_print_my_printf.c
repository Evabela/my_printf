/*
** EPITECH PROJECT, 2025
** unit tests
** File description:
** tests
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/my.h"

void redirect_all_std(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(myprintf, simple_string, .init = redirect_all_std)
{
    my_printf("hello world");
    cr_assert_stdout_eq_str("hello world");
}

Test(my_printf, s_flag, .init = redirect_all_std)
{
    char str[6] = "world";

    my_printf("Hello %s\n", str);
    cr_assert_stdout_eq_str("Hello world\n");
}

Test(my_printf, c_flag, .init = redirect_all_std)
{
    my_printf("Hello %c\n", 'a');
    cr_assert_stdout_eq_str("Hello a\n");
}

Test(my_printf, o_flags, .init = redirect_all_std)
{
    int nb = 670;

    my_printf("The octal of %d is %o\n", nb, nb);
    cr_assert_stdout_eq_str("The octal of 670 is 1236\n");
}

Test(my_printf, d_and_i_flags, .init = redirect_all_std)
{
    int nb = 21;

    my_printf("If you multiple %d by %d, the result is %i.\n", nb, 2, nb * 2);
    cr_assert_stdout_eq_str("If you multiple 21 by 2, the result is 42.\n");
}

Test(my_printf, percentages_flags, .init = redirect_all_std)
{
    char str[8] = "Epitech";

    my_printf("The word %%\n", str, my_strlen(str));
    cr_assert_stdout_eq_str("The word %\n");
}

Test(my_printf, x_and_X_flags, .init = redirect_all_std)
{
    int nb = 810;

    my_printf("The hexadecimal of %d is %x or %X\n", nb, nb, nb);
    cr_assert_stdout_eq_str("The hexadecimal of 810 is 32a or 32A\n");
}

Test(my_printf, u_flags, .init = redirect_all_std)
{
    int nb = -673541635;

    my_printf("The unsigned of %d is %u\n", nb, nb);
    cr_assert_stdout_eq_str("The unsigned of -673541635 is 3621425661\n");
}

Test(my_printf, f_and_F_flags, .init = redirect_all_std)
{
    double nb1 = 87.25;
    double nb2 = -87.25;
    double nb3 = 0.0025;

    my_printf("The float of is %f or %F or %f or %f\n", nb1, nb1, nb2, nb3);
    cr_assert_stdout_eq_str("The float of is 87.250000 or 87.250000 or -87.250000 or 0.002500\n");
}

Test(my_printf, e_and_E_flags, .init = redirect_all_std)
{
    double nb2 = -87.25;
    double nb3 = 0.00025;
    double nb4 = -0.00;
    double nb5 = 0.00;

    my_printf("%e, %E, %e, %E, %e, %E, %e, %E", nb2, nb2, nb3, nb3, nb5, nb5, nb4, nb4);
    cr_assert_stdout_eq_str("-8.725000e+01, -8.725000E+01, 2.500000e-04, 2.500000E-04, 0.000000e+00, 0.000000E+00, -0.000000e+00, -0.000000E+00");
}

Test(my_printf, a_and_A_flags, .init = redirect_all_std)
{
    double nb = 258.14;
    double nb1 = -258.14;
    double nb2 = 0.00258;

    my_printf("The hexa is %a or %A, %a, %A, %a, %A\n", nb, nb, nb1, nb1, nb2, nb2);
    cr_assert_stdout_eq_str("The hexa is 0x1.0223d70a3d70ap+8 or 0X1.0223D70A3D70AP+8, -0x1.0223d70a3d70ap+8, -0X1.0223D70A3D70AP+8, 0x1.522a6f3f52fc2p-9, 0X1.522A6F3F52FC2P-9\n");
}

Test(my_printf, g_and_G_flags, .init = redirect_all_std)
{
    double nb = 0.00;
    double nb1 = -1578964.25;
    double nb2 = 0.000000182859;
    double nb3 = -214.25;
    double nb4 = 0.0258;

    my_printf("%g, %G, %g, %G, %g, %G, %g, %G, %g, %G\n", nb, nb, nb1, nb1, nb2, nb2, nb3, nb3, nb4, nb4);
    cr_assert_stdout_eq_str("0, 0, -1.57896e+06, -1.57896E+06, 1.82859e-07, 1.82859E-07, -214.25, -214.25, 0.0258, 0.0258\n");
}

