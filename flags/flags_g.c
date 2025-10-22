/*
** EPITECH PROJECT, 2025
** my_printf.c
** File description:
** flags g et G
*/
#include <stdarg.h>
#include "../include/my.h"

int flag_eg(double nb, int nb_char, int letter)
{
    nb_char = 12;
    if (nb < 0.0) {
        my_putchar('-');
        nb = nb * -1;
        nb_char += 1;
    }
    if ((int)nb == 0)
        negative_e(nb, letter);
    else
        positive_e(nb, letter);
    return nb_char;
}

int flag_fg(double nb, int nb_char)
{
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

int flag_g(va_list list, int nb_char)
{
    double nb = va_arg(list, double);
    double nbr = nb;
    int exponent = 0;

    if ((int)nb == 0)
        while ((int)nb == 0) {
            nb = nb * 10;
            exponent -= 1;
        }
    else
        while ((int)nb >= 10) {
            nb = nb / 10;
            exponent += 1;
        }
    if (exponent < -4 || exponent >= 6)
        nb_char = flag_eg(nbr, nb_char, 'e');
    else
        nb_char = flag_fg(nbr, nb_char);
    return nb_char;
}

int flag_gu(va_list list, int nb_char)
{
    double nb = va_arg(list, double);
    double nbr = nb;
    int exponent = 0;

    if ((int)nb == 0)
        while ((int)nb == 0) {
            nb = nb * 10;
            exponent -= 1;
        }
    else
        while ((int)nb >= 10) {
            nb = nb / 10;
            exponent += 1;
        }
    if (exponent < -4 || exponent >= 6)
        nb_char = flag_eg(nbr, nb_char, 'E');
    else
        nb_char = flag_fg(nbr, nb_char);
    return nb_char;
}
