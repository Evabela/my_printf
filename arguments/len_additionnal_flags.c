/*
** EPITECH PROJECT, 2025
** len_additionnal_flags_u
** File description:
** calculate the number of spaces to add before the specifier
*/
#include "../include/my.h"


int len_to_hexa(unsigned int nb, int res)
{
    if (nb != 0){
        len_to_hexa(nb / 16, res);
        res++;
    }
    return res;
}

int my_hexalen(unsigned int nb)
{
    int res = 0;

    if (nb == 0)
        res++;
    len_to_hexa(nb, res);
    while (nb != 0){
        nb = nb / 16;
        res++;
    }
    return res;
}

int my_octlen(unsigned int nb)
{
    int len = 0;
    int i = 1;

    if (nb == 0) {
        return len;
    } else {
        while (nb != 0) {
            nb = nb / 8;
            len += 1;
        }
    }
    return len;
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
