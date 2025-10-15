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
                    'A', 'B', 'C', 'D', 'E', 'F'};
    if (nb != 0){
        int_to_hexa(nb / 16);
        my_putchar(ref[(nb % 16) - 1]);
    } else
        return 0;
}

int flag_x(va_list list, int nb_char)
{
    return 0;
}
