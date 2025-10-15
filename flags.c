/*
** EPITECH PROJECT, 2025
** flags
** File description:
** flags for the printf project
*/

#include "include/my.h"
#include <stdarg.h>

int flag_c(va_list list, int nb_char)
{
    my_putchar((char) va_arg(list, int));
    nb_char++;
    return nb_char;
}

int flag_s(va_list list, int nb_char)
{
    char *str;

    str = va_arg(list, char *);
    my_putstr(str);
    nb_char += my_strlen(str);
    return nb_char;
}

int flag_i(va_list list, int nb_char)
{
    int int_args = 0;

    int_args = va_arg(list, int);
    my_put_nbr(int_args);
    nb_char += my_intlen(int_args);
    return nb_char;
}

int flag_percent(va_list list, int nb_char)
{
    my_putchar('%');
    nb_char++;
    return nb_char;
}
