/*
** EPITECH PROJECT, 2025
** real_flags
** File description:
** Redirect in function of the flags
*/
#include "include/my.h"

void correct_flags(int *tab)
{
    if (tab[1] == 1 && tab[6] == 0)
        tab[1] = 0;
    if (tab[2] == 1 && tab[0] == 1)
        tab[2] = 0;
    if (tab[4] == 1 && tab[1] == 1)
        tab[4] = 0;
    if (tab[4] == 1 && tab[6] == 0)
        tab[4] = 0;
}

void correct_flags2(int *tab)
{
    if (tab[0] == 1 &&
        (tab[5] == 'u' || tab[5] == 'o' || tab[5] == 'x' || tab[5] == 'X' ||
            tab[5] == 'c' || tab[5] == 's' || tab[5] == 'p' || tab[5] == '%'))
        tab[0] = 0;
    if (tab[2] == 1 &&
        (tab[5] == 'u' || tab[5] == 'o' || tab[5] == 'x' || tab[5] == 'X' ||
            tab[5] == 'c' || tab[5] == 's' || tab[5] == 'p' || tab[5] == '%'))
        tab[2] = 0;
    if (tab[3] == 1 &&
        (tab[5] == 'u' || tab[5] == 'd' || tab[5] == 'i' || tab[5] == 'c' ||
            tab[5] == 's' || tab[5] == 'p' || tab[5] == '%'))
        tab[3] = 0;
    if (tab[4] == 1 &&
        (tab[5] == 'c' || tab[5] == 's' || tab[5] == 'p' || tab[5] == '%'))
        tab[4] = 0;
}
