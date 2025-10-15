/*
** EPITECH PROJECT, 2025
** mini printf
** File description:
** print a string with argument
*/
#include "./include/my.h"
#include <stdarg.h>
#include <stdio.h>

int display_count(const char *format, va_list list, int nb_char)
{
    int i = 0;
    int temp = 0;

    while (format[i] != 0){
        temp = nb_char;
        if (format[i] == '%'){
            nb_char = flag_str(i + 1, format, list, nb_char);
            nb_char = flag_int(i + 1, format, list, nb_char);
            nb_char = flag_char(i + 1, format, list, nb_char);
            nb_char = flag_percent(i + 1, format, list, nb_char);
            i++;
        } else {
            my_putchar(format[i]);
            nb_char++;
        }
        if (nb_char == temp)
            return -1;
        i++;
    }
    return nb_char;
}

int mini_printf(const char *format, ...)
{
    va_list list;
    int res = 0;

    va_start(list, format);
    if (format[0] == 0){
        my_put_error();
        return -1;
    }
    res = display_count(format, list, res);
    if (res == -1)
        my_put_error();
    va_end(list);
    return res;
}
