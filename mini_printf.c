/*
** EPITECH PROJECT, 2025
** mini printf
** File description:
** print a string with argument
*/
#include "./include/my.h"
#include <stdarg.h>
#include <stdio.h>

int contains(char arg_format)
{
    char str[6] = {'d', 'c', 'i', 's', '%', '\0'};

    for (int i = 0; str[i] != '\0'; i++)
        if (arg_format == str[i])
            return 1;
    return -1;
}

void display_argument(char const *format, va_list list, int i, int *nbr)
{
    char arg_format = format[i + 1];
    int len = 0;

    if (arg_format == 'd' || arg_format == 'i') {
        len = my_put_nbr(va_arg(list, int));
        *nbr = *nbr + len;
    }
    if (arg_format == 's') {
        len = my_putstr(va_arg(list, char*));
        *nbr = *nbr + len;
    }
    if (arg_format == 'c')
        my_putchar(va_arg(list, int));
    if (arg_format == '%')
        my_putchar('%');
    if (contains(arg_format) == -1) {
        my_putchar('%');
        my_putchar(arg_format);
    }
}

void display_string(char const *format, va_list list, int *nbr)
{
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            display_argument(format, list, i, nbr);
            i++;
            *nbr = *nbr + 1;
        } else {
            my_putchar(format[i]);
            *nbr = *nbr + 1;
        }
    }
}

int mini_printf(const char *format, ...)
{
    va_list list;
    int nbr = 0;

    va_start(list, format);
    display_string(format, list, &nbr);
    va_end(list);
    return (nbr);
}
