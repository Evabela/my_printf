/*
** EPITECH PROJECT, 2025
** flag_functions
** File description:
** Functions of flags after redirect
*/

#include "include/my.h"

void function_pos(int *nb_char, char c)
{
    my_putchar(c);
    *nb_char += 1;
}
