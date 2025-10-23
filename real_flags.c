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
    //char flags[5] = {'+', '-', ' ', '#', '0', letter, w, p};
    if (tab[0] == 1 && (tab[5] == 'u' || tab[5] == 'o' || tab[5] == ' '))
}
