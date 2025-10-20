/*
** EPITECH PROJECT, 2025
** my_printf.c
** File description:
** declare the o flag and others
*/
#include <stdarg.h>
#include "include/my.h"

int flag_o(va_list list, int nb_char)
{
    unsigned int nb = va_arg(list, unsigned int);
    unsigned int result;

    while (nb < 8) {
        result = (result * 10) + (nb % 8);
        nb = nb / 8;
        nb_char += 1;
    }
    my_put_nbr(result);
    return nb_char;
}

int my_print_e(double nb)
{
    int i = 0;

    my_put_nbr((int)nb);
    my_putchar('.');
    while (i < 6) {
        nb = nb	- (int)nb;
	nb = nb * 10;
        my_put_nbr((int)nb);
        i++;
    }
}

int flag_e(va_list list, int nb_char)
{
    double nb = va_arg(list, double);
    int exposant = 0;
    int decimal = 0;

    nb_char = 12;
    if (nb < 0) {
        my_putchar('-');
        nb = nb * -1;
        nb_char += 1;
    }
    while (nb >= 10.000000) {
        nb = nb / 10;
        exposant += 1;
    }
    my_print_e(nb);
    my_putstr("e+");
    if (exposant < 10)
        my_putchar('0');
    my_put_nbr(exposant);
    return nb_char;
}

int flag_eu(va_list list, int nb_char)
{
    double nb = va_arg(list, double);
    int exposant = 0;
    int decimal = 0;

    nb_char = 12;
    if (nb < 0) {
        my_putchar('-');
	nb = nb * -1;
        nb_char += 1;
    }
    while (nb >= 10.000000) {
        nb = nb / 10;
        exposant += 1;
    }
    my_print_e(nb);
    my_putstr("E+");
    if (exposant < 10)
        my_putchar('0');
    my_put_nbr(exposant);
    return nb_char;
}

