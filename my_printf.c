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
    linked_list chained_list = initialize(); // sera initialisée plus tard

    va_start(list, format);
    if (format[0] == 0){
        my_put_error();
        return -1;
    }
    while (format[i] != 0){
        if (format[i] == '%'){
            while (format[i + 1] != chained_list.letter && chained_list != NULL)
                chained_list = chained_list->next;
            if (chained_list != NULL){
                nb_char += chained_list.ptr; // pas compris ça
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
