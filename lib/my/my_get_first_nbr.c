/*
** EPITECH PROJECT, 2025
** my_get_first_nbr.c
** File description:
** get t=number if it is the first thing in the string
*/

#include "my.h"

int my_get_sign(char const *str, int i)
{
    int sign = 1;

    while (str[i] != '\0') {
        if (str[i] == '-')
            sign *= -1;
        if (str[i] == '+')
            sign *= 1;
        i = i + 1;
    }
    return (sign);
}

int my_get_first_nbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long int result = 0;

    if (str[i] == '-' || str[i] == '+')
        sign = my_get_sign(str, i);
    while (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    if (result < -2147483648 || result > 2147483647)
        return (0);
    else
        return (result * sign);
}
