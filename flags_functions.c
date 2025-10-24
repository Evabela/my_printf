/*
** EPITECH PROJECT, 2025
** my_printf
** File description:
** initialize the flag functions
*/
#include "./include/my.h"

void function_spaces(char letter, int *nb_char, int len)
{
    for (int i = 0; i < len; i++) {
        my_putchar(letter);
        *nb_char += 1;
    }
}

void function_sharp(int *nb_char, int tab)
{
}

void function_pos(int *nb_char, char letter)
{
    my_putchar(letter);
    *nb_char += 1;
}

void function_alignement(int *nb_char, int tab)
{
}
