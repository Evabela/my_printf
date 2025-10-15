/*
** EPITECH PROJECT, 2025
** mini printf
** File description:
** print a string with argument
*/
#include "./include/my.h"
#include <stdarg.h>
#include <stdio.h>

int my_printf(const char *format, ...)
{
    va_list list;
    int nb_char = 0;
    int i = 0;
    linked_list ptrs_t; // sera initialisée plus tard

    va_start(list, format);
    if (format[0] == 0){
        my_put_error();
        return -1;
    }
    while (format[i] != 0){
        if (format[i] == '%'){
            while (format[i + 1] != ptrs_t->letter && element != 0)
                ptrs_t = ptrs_t->next;
            if (ptrs_t != 0){
                nb_char += element->ptr;
            } else {
                nb_char++;
                my_putchar('%');
            }
            i++;
        } else {
            nb_char++;
            my_putchar(format[i]);
        }
        i++;
    }
    va_end(list);
    return nb_char;
}
