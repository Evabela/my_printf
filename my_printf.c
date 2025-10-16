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
    linked_list_t l_list = *initialize_list();

    va_start(list, format);
    if (format[0] == 0){
        my_put_error();
        return -1;
    }
    while (format[i] != 0){
        if (format[i] == '%'){
            while (format[i + 1] != l_list.letter && l_list.next != NULL)
                l_list = *l_list.next;
            if (l_list.next != NULL){
                nb_char += l_list.ptr(list, i);
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
