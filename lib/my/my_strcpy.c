/*
** EPITECH PROJECT, 2025
** my_strpy.c
** File description:
** copy a string into another
*/

char *my_strcpy(char *dest, char const *src)
{
    int num = -1;

    for (int i = 0; src[i] != '\0'; i++) {
        dest[i] = src[i];
        num = i;
    }
    dest[num + 1] = '\0';
    return (dest);
}
