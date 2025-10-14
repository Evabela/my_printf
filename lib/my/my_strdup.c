/*
** EPITECH PROJECT, 2025
** my_strdup.c
** File description:
** allocate memory and put the string given as an argument in it
*/
#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    char *str = NULL;
    int i = 0;

    str = malloc(sizeof(char) * (my_strlen(src) + 1));
    while (i < my_strlen(src)) {
        str[i] = src[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}
