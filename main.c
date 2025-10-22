/*
** EPITECH PROJECT, 2025
** my_printf
** File description:
** main
*/
#include "./include/my.h"
#include <stdio.h>

int main(void)
{
    double nb = 0.00;
    double nb1 = -0.00;

    my_printf("%e, %E, %e, %E\n", nb, nb, nb1, nb1);
    printf("%e, %E, %e, %E\n", nb, nb, nb1, nb1);
}
