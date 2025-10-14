/*
** EPITECH PROJECT, 2025
** my_strstr.c
** File description:
** deleting before the parameter
*/

int is_word(char *str, int i, char const *to_find)
{
    for (int j = 0; to_find[j] != '\0'; j++)
        if (str[i] != to_find[j]) {
            return (0);
            i++;
        }
    return (1);
}

char *my_strstr(char *str, char const *to_find)
{
    for (int i = 0; str[i] != '\0'; i++)
        if (is_word(str, i, to_find) == 1)
            return (&str[i]);
        else
            return (0);
    return (0);
}
