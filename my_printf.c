/*
** EPITECH PROJECT, 2025
** mini printf
** File description:
** print a string with argument
*/
#include "./include/my.h"
#include <stdarg.h>
#include <stdio.h>

int find_flags(const char *format, linked_list_t *l_list, va_list list, int i)
{
    int nb_char = 0;

    while (format[i + 1] != l_list->letter && l_list != NULL)
        l_list = l_list->next;
    if (l_list != NULL){
        l_list->ptr(list, &nb_char);
    } else {
        nb_char++;
        my_putchar('%');
    }
    return (nb_char);
}

int my_printf(const char *format, ...)
{
    va_list list;
    int nb_char = 0;
    linked_list_t l_list = *initialize_list();

    va_start(list, format);
    if (format[0] == 0){
        my_put_error();
        return -1;
    }
    for (int i = 0; format[i] != 0; i++){
        if (format[i] == '%'){
            nb_char += find_flags(format, &l_list, list, i);
            i++;
        } else {
            nb_char++;
            my_putchar(format[i]);
        }
    }
    va_end(list);
    return nb_char;
}
