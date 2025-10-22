/*
** EPITECH PROJECT, 2025
** my_printf.c
** File description:
** flags g et G
*/
#include <stdarg.h>
#include "../include/my.h"

static void negative_eg(double nb, char letter)
{
    int exponent = 0;

    while ((int)nb == 0) {
        nb = nb * 10;
        exponent -= 1;
    }
    nb += 0.0000005;
    my_put_nbr((int)nb);
    my_putchar('.');
    for (int i = 0; i < 5; i++) {
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

static void positive_eg(double nb, char letter)
{
    int exponent = 0;

    while ((int)nb >= 10) {
        nb = nb / 10;
        exponent += 1;
    }
    nb += 0.0000005;
    my_put_nbr((int)nb);
    my_putchar('.');
    for (int i = 0; i < 5; i++) {
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

void flag_eg(double nb, int *nb_char, int letter)
{
    *nb_char = 12;
    if (nb < 0.0) {
        my_putchar('-');
        nb = nb * -1;
        *nb_char = *nb_char + 1;
    }
    if ((int)nb == 0)
        negative_eg(nb, letter);
    else
        positive_eg(nb, letter);
}

static void display_after(double nb, int *nb_char)
{
    if ((int)nb == 0)
        for (int i = 0; (int)nb == 0 && i < 6; i++) {
            my_putchar((int) nb + '0');
            *nb_char = *nb_char + 1;
            nb -= (int) nb;
            nb *= 10;
        }
    for (int i = 0; (int)nb != 0 && i < 6; i++) {
        my_putchar((int) nb + '0');
        *nb_char = *nb_char + 1;
        nb -= (int) nb;
        nb *= 10;
    }
}

static void my_put_dbl_g(double temp, double nb, double ten, int *nb_char)
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
    nb *= 10;
    display_after(nb, nb_char);
}

void flag_fg(double nb, int *nb_char)
{
    if ((int)nb == 0) {
        my_putchar('0');
        *nb_char = *nb_char + 1;
    } else if (nb == 0) {
        my_putchar('0');
        *nb_char = *nb_char + 1;
    } else if (nb < 0.0){
        my_putchar('-');
        *nb_char = *nb_char + 1;
        nb -= 0.0000005;
        nb = - nb;
    } else
        nb += 0.0000005;
    if (nb != 0.0)
        my_put_dbl_g(nb, nb, 10.0, nb_char);
}

void flag_g(va_list list, int *nb_char)
{
    double nb = va_arg(list, double);
    double nbr = nb;
    int exponent = 0;

    if ((int)nb == 0 && nb != 0.0)
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
        flag_eg(nbr, nb_char, 'e');
    else
        flag_fg(nbr, nb_char);
}

void flag_gu(va_list list, int *nb_char)
{
    double nb = va_arg(list, double);
    double nbr = nb;
    int exponent = 0;

    if ((int)nb == 0 && nb != 0.0)
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
        flag_eg(nbr, nb_char, 'E');
    else
        flag_fg(nbr, nb_char);
}
