/*
** EPITECH PROJECT, 2025
** len_additionnal_flags_u
** File description:
** calculate the number of spaces to add before the specifier
*/
#include "../include/my.h"

int my_hexalen(unsigned int nb)
{
    return 0;
}

int my_octlen(unsigned int nb)
{
    return 0;
}

int len_additionnal_uint(int *tab, int *nb_char, unsigned int nb)
{
    int res = tab[6];
    char letter = tab[5];

    if (letter == 'u')
        res -= my_intlen_u(nb);
    if (letter == 'o')
        res -= my_octlen(nb);
    if (letter == 'x' || letter == 'X')
        res -= my_hexalen(nb);
    if (res > 0){
        *nb_char += res;
        return res;
    }
    return 0;
}
