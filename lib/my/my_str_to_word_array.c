/*
** EPITECH PROJECT, 2025
** my_str_to_word_array.c
** File description:
** turn a sentence into an array of words
*/

#include <stdlib.h>

int is_alnum(char const *str, int i)
{
    if (str[i] >= '0' && str[i] <= '9')
        return (1);
    if (str[i] >= 'a' && str[i] <= 'z')
        return (1);
    if (str[i] >= 'A' && str[i] <= 'Z')
        return (1);
    return (0);
}

int get_len(int i, char const *str, char **word_array, int *n)
{
    int start = 0;

    if (is_alnum(str, i - 1) == 0 && is_alnum(str, i) == 1) {
        start = i;
        i++;
        while (is_alnum(str, i) == 1)
            i++;
        word_array[*n] = malloc(sizeof(**word_array) * (i - start + 1));
        *n = *n + 1;
    }
    i++;
    return (i);
}

void len_words(char const *str, char **word_array)
{
    int n = 0;
    int i = 0;
    int start = 0;

    while (is_alnum(str, i) == 0)
        i++;
    if (is_alnum(str, i) == 1) {
        start = i;
        while (is_alnum(str, i) == 1)
            i++;
    }
    word_array[n] = malloc(sizeof(**word_array) * (i - start + 1));
    n++;
    while (str[i] != '\0') {
        i = get_len(i, str, word_array, &n);
    }
    word_array[n] = malloc(sizeof(**word_array) * (1));
}

int put_in_array(char const *str, int i, char **word_array, int *a)
{
    int b = 0;

    while (is_alnum(str, i) == 0)
        i++;
    while (is_alnum(str, i) == 1) {
        word_array[*a][b] = str[i];
        b++;
        i++;
    }
    word_array[*a][b] = '\0';
    *a = *a + 1;
    return (i);
}

char **my_str_to_word_array(char const *str)
{
    int words = 0;
    char **word_array;
    int i = 0;
    int a = 0;

    if (is_alnum(str, 0) == 1)
        words++;
    for (int i = 1; str[i] != '\0'; i++)
        if (is_alnum(str, i - 1) == 0 && is_alnum(str, i) == 1)
            words += 1;
    word_array = malloc(sizeof(*word_array) * (words + 1));
    len_words(str, word_array);
    while (str[i] != '\0') {
        i = put_in_array(str, i, word_array, &a);
    }
    word_array[words] = 0;
    return (word_array);
}
