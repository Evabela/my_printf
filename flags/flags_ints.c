/*
** EPITECH PROJECT, 2025
** flags_ints
** File description:
** Flags functions for u, i, f and F
*/

#include "../include/my.h"
#include <stdarg.h>

static int last_nb(double nb)
{
    int temp = nb;

    nb = nb - (int)nb;
    nb = nb * 10;
    if ((int)nb > 5)
        temp += 1.0;
    return temp;
}

static void display_end(int i, double nb, int *nb_char)
{
    for (int i = 0; i < 6; i++){
        nb *= 10;
        my_putchar((int) nb + '0');
        *nb_char = *nb_char + 1;
        nb -= (int) nb;
    }
}

void my_put_dbl(double temp, double nb, double ten, int *nb_char)
{
    int i = 0;

    while (nb >= 1.0 && i < 6){
        while (temp >= 10.0){
            temp = temp / 10.0;
            ten *= 10;
        }
        if (i == 5)
            nb = last_nb(nb);
        i++;
        my_putchar((int) temp + '0');
        nb = nb - (int) temp * ten / 10;
        *nb_char = *nb_char + 1;
        temp = nb;
        ten = 10;
    }
    my_putchar('.');
    *nb_char = *nb_char + 1;
    display_end(i, nb, nb_char);
}

void flag_u(va_list list, int *nb_char, int *tab)
{
    unsigned int nb = va_arg(list, unsigned int);

    redirect_flag_unb(tab, nb, nb_char);
    if (nb == 0) {
        my_putchar('0');
        *nb_char = *nb_char + 1;
    } else {
        *nb_char += my_intlen_u(nb);
        my_put_nbr_u(nb);
    }
}

void flag_i(va_list list, int *nb_char, int *tab)
{
    flag_d(list, nb_char, tab);
}

void flag_f(va_list list, int *nb_char, int *tab)
{
    double nb = va_arg(list, double);

    redirect_flag_dblnb(tab, nb, nb_char);
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

void flag_fu(va_list list, int *nb_char, int *tab)
{
    flag_f(list, nb_char, tab);
}
