/*
** EPITECH PROJECT, 2025
** flags
** File description:
** flags for the printf project
*/

#include "../include/my.h"
#include <stdarg.h>

void flag_c(va_list list, int *nb_char)
{
    my_putchar((char) va_arg(list, int));
    *nb_char = *nb_char + 1;
}

void flag_s(va_list list, int *nb_char)
{
    char *str;

    str = va_arg(list, char *);
    my_putstr(str);
    *nb_char = *nb_char + my_strlen(str);
}

void flag_d(va_list list, int *nb_char)
{
    int int_args = 0;

    int_args = va_arg(list, int);
    my_put_nbr(int_args);
    *nb_char = *nb_char + my_intlen(int_args);
}

void flag_percent(va_list list, int *nb_char)
{
    my_putchar('%');
    *nb_char = *nb_char + 1;
}

void flag_n(va_list list, int *nb_char)
{
    int *ptr = va_arg(list, int*);

    *ptr = *nb_char;
}
