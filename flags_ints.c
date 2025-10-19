/*
** EPITECH PROJECT, 2025
** flags_ints
** File description:
** Flags functions for u, i, f and F
*/

#include "include/my.h"
#include <stdarg.h>

int my_put_dbl(double temp, double nb, double ten, int nb_char)
{
    while (nb >= 1.0){
        while (temp >= 10.0){
            temp = temp / 10.0;
            ten *= 10;
        }
        my_putchar((int) temp + '0');
        nb = nb - (int) temp * ten / 10;
        nb_char++;
        temp = nb;
        ten = 10;
    }
    my_putchar('.');
    nb_char++;
    for (int i = 0; i < 6; i++){
        nb *= 10;
        my_putchar((int) nb + '0');
        nb_char++;
        nb -= (int) nb;
    }
    return nb_char;
}

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

    if (nb < 0.0){
        my_putchar('-');
        nb_char++;
        nb -= 0.0000005;
        nb = - nb;
    } else
        nb += 0.0000005;
    nb_char += my_put_dbl(nb, nb, 10.0, nb_char);
    return nb_char;
}

int flag_fu(va_list list, int nb_char)
{
    nb_char = flag_f(list, nb_char);
    return nb_char;
}
