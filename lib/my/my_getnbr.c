/*
** EPITECH PROJECT, 2025
** my_getnbr.c
** File description:
** return number
*/
#include "my.h"

int get_sign(char const *str, int i)
{
    int sign = 1;

    while (i >= 0) {
        if (str[i] == '-')
            sign *= -1;
        i--;
    }
    return (sign);
}

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;
    long int result = 0;

    while (str[i] < '0' || str[i] > '9')
        if (str[i] == '\0')
            return (0);
        else
            i++;
    if (i > 0)
        if (str[i - 1] == '-' || str[i - 1] == '+')
            sign = get_sign(str, i);
    while (str[i] >= '0' && str[i] <= '9') {
        result = result * 10 + (str[i] - 48);
        i++;
    }
    if (result < -2147483648 || result > 2147483647)
        return (0);
    else
        return (result * sign);
}
