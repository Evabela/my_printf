/*
** EPITECH PROJECT, 2025
** flags_hexa
** File description:
** flags x, X, a and A
*/
#include <stdarg.h>
#include "include/my.h"

int int_to_hexa(int nb)
{
    char ref[16] = {'1', '2', '3', '4', '5', '6', '7', '8', '9',
                    'a', 'b', 'c', 'd', 'e', 'f'};
    if (nb != 0){
        int_to_hexa(nb / 16);
        my_putchar(ref[(nb % 16) - 1]);
    }
    return 0;
}

int flag_x(va_list list, int nb_char)
{
    int nb = va_arg(list, int);

    int_to_hexa(nb);
    while (nb != 0){
        nb = nb / 16;
        nb_char++;
    }
    return nb_char;
}
