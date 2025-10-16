/*
** EPITECH PROJECT, 2025
** flags_ints
** File description:
** Flags functions for u, i, f and F
*/

#include "include/my.h"
#include <stdarg.h>

int flag_u(va_list list, int nb_char)
{
    unsigned int nb = va_arg(list, unsigned int);

    nb_char += my_intlen_u(nb);
    my_put_nbr_u(nb);
    return nb_char;
}

int flag_i(va_list list, int nb_char)
{
    return nb_char;
}

int flag_f(va_list list, int nb_char)
{
    double nb = va_arg(list, double);

    my_put_nbr((int) nb);
    nb_char += my_intlen((int) nb);
    my_putchar('.');
    nb1 -= (int) nb;
    my_put_nbr((int) (nb * 1000000));
    nb_char += my_intlen((int) (nb * 1000000));
    return nb_char;
}

int flag_fu(va_list list, int nb_char)
{
    double nb = va_arg(list, double);

    my_put_nbr((int) nb);
    nb_char += my_intlen((int) nb);
    my_putchar('.');
    nb1 -= (int) nb;
    my_put_nbr((int) (nb * 1000000));
    nb_char += my_intlen((int) (nb * 1000000));
    return nb_char;
}
