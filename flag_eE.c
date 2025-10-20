/*
** EPITECH PROJECT, 2025
** my_printf.c
** File description:
** declare the o flag and others
*/
#include <stdarg.h>
#include "include/my.h"

void negative_e(double nb, char letter)
{
    int exponent = 0;

    while ((int)nb == 0) {
        nb = nb * 10;
        exponent -= 1;
    }
    my_put_nbr((int)nb);
    my_putchar('.');
    for (int i = 0; i < 6; i++) {
        nb = nb - (int)nb;
        nb = nb * 10;
        my_put_nbr((int)nb);
    }
    my_putchar(letter);
    my_putchar('-');
    exponent = exponent * (-1);
    if (exponent < 10)
        my_putchar('0');
    my_put_nbr(exponent);
}

void positive_e(double nb, char letter)
{
    int exponent = 0;

    while ((int)nb >= 10) {
        nb = nb / 10;
        exponent += 1;
    }
    my_put_nbr((int)nb);
    my_putchar('.');
    for (int i = 0; i < 6; i++) {
        nb = nb - (int)nb;
        nb = nb * 10;
        my_put_nbr((int)nb);
    }
    my_putchar(letter);
    my_putchar('+');
    if (exponent < 10)
        my_putchar('0');
    my_put_nbr(exponent);
}

int flag_e(va_list list, int nb_char)
{
    double nb = va_arg(list, double);

    nb_char = 12;
    if (nb < 0.0) {
        my_putchar('-');
        nb = nb * -1;
        nb_char += 1;
    }
    if ((int)nb == 0)
        negative_e(nb, 'e');
    else
        positive_e(nb, 'e');
    return nb_char;
}

int flag_eu(va_list list, int nb_char)
{
    double nb = va_arg(list, double);

    nb_char = 12;
    if (nb < 0.0) {
        my_putchar('-');
        nb = nb	* -1;
        nb_char	+= 1;
    }
    if ((int)nb == 0)
        negative_e(nb, 'E');
    else
        positive_e(nb, 'E');
    return nb_char;
}
