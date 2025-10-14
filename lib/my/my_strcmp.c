/*
** EPITECH PROJECT, 2025
** my_strcmp.c
** File description:
** compare strings
*/

int my_strcmp(char const *s1, char const *s2)
{
    int r1 = 0;
    int r2 = 0;
    int result = 0;

    for (int i = 0; s1[i] != '\0'; i++)
        r1 += s1[i];
    for (int i = 0; s2[i] != '\0'; i++)
        r2 += s2[i];
    result = r1 - r2;
    if (result > 0)
        return (1);
    if (result < 0)
        return (-1);
    else
        return (0);
}
