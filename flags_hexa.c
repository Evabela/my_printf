/*
** EPITECH PROJECT, 2025
** flags_hexa
** File description:
** flags x, X, a and A
*/
#include <stdarg.h>
#include "include/my.h"

int int_to_hexa(unsigned int nb, char *ref)
{
    if (nb != 0){
        int_to_hexa(nb / 16, ref);
        my_putchar(ref[(nb % 16) - 1]);
    }
    return 0;
}

int flag_x(va_list list, int nb_char)
{
    char ref[16] = {'1', '2', '3', '4', '5', '6', '7', '8', '9',
        'a', 'b', 'c', 'd', 'e', 'f'};
    unsigned int nb = va_arg(list, unsigned int);

    int_to_hexa(nb, ref);
    while (nb != 0){
        nb = nb / 16;
        nb_char++;
    }
    return nb_char;
}

int flag_xu(va_list list, int nb_char)
{
    char ref[16] = {'1', '2', '3', '4', '5', '6', '7', '8', '9',
        'A', 'B', 'C', 'D', 'E', 'F'};
    unsigned int nb = va_arg(list, unsigned int);

    int_to_hexa(nb, ref);
    while (nb != 0){
        nb = nb / 16;
        nb_char++;
    }
    return nb_char;
}

int flag_a(va_list list, int nb_char)
{
    char ref[16] = {'1', '2', '3', '4', '5', '6', '7', '8', '9',
        'a', 'b', 'c', 'd', 'e', 'f'};

    return nb_char;
}

int flag_au(va_list list, int nb_char)
{
    char ref[16] = {'1', '2', '3', '4', '5', '6', '7', '8', '9',
        'A', 'B', 'C', 'D', 'E', 'F'};

    return nb_char;
}
