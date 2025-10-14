/*
** EPITECH PROJECT, 2025
** my_swap.c
** File description:
** swaps two integers
*/
#include "my.h"

void my_swap(int *a, int *b)
{
    int c;

    c = *a;
    *a = *b;
    *b = c;
}
