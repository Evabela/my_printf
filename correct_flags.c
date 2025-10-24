/*
** EPITECH PROJECT, 2025
** correct_flags
** File description:
** A function to correct conflicts between letters and their flags
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

void function_spaces(char letter, int *nb_char, int char_nb)
{
    for (int i = 0; i < char_nb; i++) {
        my_putchar(letter);
        *nb_char += 1;
    }
}
