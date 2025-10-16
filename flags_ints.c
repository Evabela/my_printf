/*
** EPITECH PROJECT, 2025
** flags_ints
** File description:
** Flags functions for u, i, f and F
*/

#include "include/my.h"
#include <stdarg.h>

int flag_u(va_list list, int nb_char)
{
    unsigned int nb = va_arg(list, unsigned int);

    nb_char += my_intlen_u(nb);
    my_put_nbr_u(nb);
    return nb_char;
}
