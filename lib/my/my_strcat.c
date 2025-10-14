/*
** EPITECH PROJECT, 2025
** my_strcat.c
** File description:
** duno
*/

char *my_strcat(char *dest, char const *src)
{
    int len = -1;

    for (int i = 0; dest[i] != '\0'; i++)
        len = i;
    for (int j = 0; src[j] != '\0'; j++) {
        dest[len + 1] = src[j];
        len++;
    }
    return (dest);
}
