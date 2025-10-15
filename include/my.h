/*
** EPITECH PROJECT, 2025
** my.h
** File description:
** my header
*/
#include <stdarg.h>

#ifndef MY_H_
    #define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_intlen(int nb);

void my_print_except(void);
int recursive(int n, int *count);
char get_sign_nb(int n);
int my_get_sign(char const *str, int i);
int get_sign(char const *str, int i);
int diff_operators(char **argv, int value1, int value2);
int compute(int argc, char **argv);

int display_count(const char *format, va_list list, int nb_char);
int flag_char(int j, const char *format, va_list list, int nb_char);
int flag_str(int j, const char *format, va_list list, int nb_char);
int flag_int(int j, const char *format, va_list list, int nb_char);
int flag_percent(int j, const char *format, va_list list, int nb_char);
void my_put_error(void);
int my_printf(const char *format, ...);

#endif /* !MY_H_ */
