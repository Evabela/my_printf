/*
** EPITECH PROJECT, 2025
** flags_others
** File description:
** Flags for my_printf : p
*/

#include <stdarg.h>
#include "include/my.h"

int long_to_hexa(unsigned long nb, char *ref)
{
    if (nb != 0){
        long_to_hexa(nb / 16, ref);
        my_putchar(ref[(nb % 16)]);
    }
    return 0;
}

int flag_p(va_list list, int nb_char)
{
    unsigned long adress = (unsigned long) va_arg(list, void *);
    char ref[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        'a', 'b', 'c', 'd', 'e', 'f'};

    my_putstr("0x");
    nb_char += 2;
    long_to_hexa(adress, ref);
    while (adress != 0){
        adress = adress / 16;
        nb_char++;
    }
    return nb_char;
}
