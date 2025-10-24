/*
** EPITECH PROJECT, 2025
** flag_functions
** File description:
** Functions of flags after redirect
*/

#include "include/my.h"

void function_pos(char c, int *nb_char)
{
    my_putchar(c);
    *nb_char += 1;
}
