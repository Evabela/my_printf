/*
** EPITECH PROJECT, 2025
** flags
** File description:
** flags for the printf project
*/

#include "../include/my.h"
#include <stdarg.h>
#include <unistd.h>

void flag_c(va_list list, int *nb_char, int *tab)
{
    char letter = va_arg(list, int);

    redirect_flag_char(tab, letter, nb_char);
    my_putchar(letter);
    *nb_char = *nb_char + 1;
}

void flag_s(va_list list, int *nb_char, int *tab)
{
    char *str;

    str = va_arg(list, char *);
    redirect_flag_str(tab, str, nb_char);
    if (str[0] == 0) {
        my_putstr("");
    } else {
        my_putstr(str);
        *nb_char = *nb_char + my_strlen(str);
    }
}

void flag_d(va_list list, int *nb_char, int *tab)
{
    int int_args = 0;

    int_args = va_arg(list, int);
    redirect_flag_nb(tab, int_args, nb_char);
    my_put_nbr(int_args);
    *nb_char = *nb_char + my_intlen(int_args);
}

void flag_percent(va_list list, int *nb_char, int *tab)
{
    redirect_flag_char(tab, '%', nb_char);
    my_putchar('%');
    *nb_char = *nb_char + 1;
}

void flag_n(va_list list, int *nb_char, int *tab)
{
    int *ptr = va_arg(list, int*);

    *ptr = *nb_char;
}
