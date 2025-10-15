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

int flag_d(int j, const char *format, va_list list, int nb_char);
int flag_percent(int j, const char *format, va_list list, int nb_char);
int flag_c(int j, const char *format, va_list list, int nb_char);
int flag_s(int j, const char *format, va_list list, int nb_char);
int flag_i(int j, const char *format, va_list list, int nb_char);
int flag_o(int j, const char *format, va_list list, int nb_char);
int flag_x(int j, const char *format, va_list list, int nb_char);
int flag_X(int j, const char *format, va_list list, int nb_char);
int flag_u(int j, const char *format, va_list list, int nb_char);
int flag_f(int j, const char *format, va_list list, int nb_char);
int flag_F(int j, const char *format, va_list list, int nb_char);
int flag_e(int j, const char *format, va_list list, int nb_char);
int flag_E(int j, const char *format, va_list list, int nb_char);
int flag_g(int j, const char *format, va_list list, int nb_char);
int flag_G(int j, const char *format, va_list list, int nb_char);
int flag_p(int j, const char *format, va_list list, int nb_char);
int flag_n(int j, const char *format, va_list list, int nb_char);
int flag_a(int j, const char *format, va_list list, int nb_char);
int flag_A(int j, const char *format, va_list list, int nb_char);

typedef struct list
{
    char letter;
    int (*ptr)(int, const char *, va_list, int);
    struct list *next;
} linked_list_t;

#endif /* !MY_H_ */
