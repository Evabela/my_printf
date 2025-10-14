/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** my header
*/
#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_

int my_get_first_nbr(char const *str);
char *my_strdup(char const *src);
void my_putchar(char c);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
char *my_strcpy(char *dest, char const *src);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
char *my_strcat(char *dest, char const *src);
char **my_str_to_word_array(char const *str);

void my_print_except(void);
int recursive(int n, int *count);
char get_sign_nb(int n);
int my_get_sign(char const *str, int i);
int get_sign(char const *str, int i);
int diff_operators(char **argv, int value1, int value2);
int compute(int argc, char **argv);

void display_string(char const *format, va_list list, int *nbr);
int display_arguments(char const *format, va_list list, int i);
int mini_printf(const char *format, ...);
int check_errors(char const *format, va_list list);

#endif /* !MY_H_ */
