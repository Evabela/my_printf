/*
** EPITECH PROJECT, 2025
** mini printf
** File description:
** print a string with argument
*/
#include "./include/my.h"
#include <stdarg.h>
#include <stdio.h>

void put_args_in_tab(int *tab, char letter, int width, int precision)
{
    tab[5] = letter;
    tab[6] = width;
    tab[7] = precision;
}

void find_number(int *i, const char *format, int *width, int *precision)
{
    if (format[*i] == '.' && *precision != 0){
        *i = *i + 1;
        while (format[*i] >= '0' && format[*i] <= '9'){
            *precision = *precision * 10 + format[*i];
            *i = *i + 1;
        }
    }
    if (format[*i] >= '1' && format[*i] <= '9' && *width != 0) {
        while (format[*i] >= '0' && format[*i] <= '9'){
            *width = *width * 10 + format[*i];
            *i = *i + 1;
        }
    }
}

int find_flags(const char *format, linked_list_t *l_list, va_list list, int *i)
{
    int nb_char = 0;
    int tab[8] = {0};
    char flags[5] = {'+', '-', ' ', '#', '0'};
    int width = 0;
    int precision = 0;
    int j = 0;

    while (format[*i] != l_list->letter && format[*i] != 0){
        if (format[*i] == flags[j]){
            tab[j] = 1;
            j++;
        }
        find_number(i, format, &width, &precision);
        if (l_list->letter == 'A')
            *i = *i + 1;
        l_list = l_list->next;
    }
    put_args_in_tab(tab, l_list->letter, width, precision);
    if (format[*i] != 0)
        l_list->ptr(list, &nb_char);
    return (nb_char);
}

int my_printf(const char *format, ...)
{
    va_list list;
    int nb_char = 0;
    linked_list_t l_list = *initialize_list();

    va_start(list, format);
    if (format[0] == 0){
        return 0;
    }
    for (int i = 0; format[i] != 0; i++){
        if (format[i] == '%'){
            nb_char += find_flags(format, &l_list, list, &i);
        } else {
            nb_char++;
            my_putchar(format[i]);
        }
    }
    va_end(list);
    return nb_char;
}
