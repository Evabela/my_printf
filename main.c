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
    double nb4 = 2000000.985123;
    double nb5 = -2000000.985123;
    double nb6 = 0.00001234567;
    double nb8 = 125.0;

    my_printf("Hello, %g, %G \n", nb4, nb4);
    printf("Hello, %g, %G\n", nb4, nb4);
    my_printf("Hello, %g, %G \n", nb5, nb5);
    printf("Hello, %g, %G\n", nb5, nb5);
    my_printf("Hello, %g, %G\n", nb6, nb6);
    printf("Hello, %g, %G\n", nb6, nb6);
    my_printf("Hello, %g, %G \n", nb8, nb8);
    printf("Hello, %g, %G\n", nb8, nb8);

}
