/*
** EPITECH PROJECT, 2025
** flags_ints
** File description:
** Flags functions for u, i, f and F
*/

#include "../include/my.h"
#include <stdarg.h>

void my_put_dbl(double temp, double nb, double ten, int *nb_char)
{
    while (nb >= 1.0){
        while (temp >= 10.0){
            temp = temp / 10.0;
            ten *= 10;
        }
        my_putchar((int) temp + '0');
        nb = nb - (int) temp * ten / 10;
        *nb_char = *nb_char + 1;
        temp = nb;
        ten = 10;
    }
    my_putchar('.');
    *nb_char = *nb_char + 1;
    for (int i = 0; i < 6; i++){
        nb *= 10;
        my_putchar((int) nb + '0');
        *nb_char = *nb_char + 1;
        nb -= (int) nb;
    }
}

void flag_u(va_list list, int *nb_char)
{
    unsigned int nb = va_arg(list, unsigned int);

    *nb_char += my_intlen_u(nb);
    my_put_nbr_u(nb);
}

void flag_i(va_list list, int *nb_char)
{
    flag_d(list, nb_char);
}

void flag_f(va_list list, int *nb_char)
{
    double nb = va_arg(list, double);

    if ((int) nb == 0) {
        my_putchar('0');
        *nb_char = *nb_char + 1;
    }
    if (nb < 0.0){
        my_putchar('-');
        *nb_char = *nb_char + 1;
        nb -= 0.0000005;
        nb = - nb;
    } else
        nb += 0.0000005;
    my_put_dbl(nb, nb, 10.0, nb_char);
}

void flag_fu(va_list list, int *nb_char)
{
    flag_f(list, nb_char);
}
