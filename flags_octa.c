/*
** EPITECH PROJECT, 2025
** my_printf.c
** File description:
** declare the o flag and others
*/
#include <stdarg.h>
#include "include/my.h"

int flag_o(va_list list, int nb_char)
{
    unsigned int nb = va_arg(list, unsigned int);
    unsigned int result;

    while (nb < 8) {
        result = (result * 10) + (nb % 8);
        nb = nb / 8;
        nb_char += 1;
    }
    my_put_nbr(result);
    return nb_char;
}
