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
int my_put_nbr_u(unsigned int nb);

void my_print_except(void);
int recursive(int n, int *count);
char get_sign_nb(int n);

int display_count(const char *format, va_list list, int nb_char);
void my_put_error(void);
int my_printf(const char *format, ...);
int int_to_hexa(unsigned int nb, char *ref);

int flag_d(va_list list, int nb_char);
int flag_percent(va_list list, int nb_char);
int flag_c(va_list list, int nb_char);
int flag_s(va_list list, int nb_char);
int flag_i(va_list list, int nb_char);
int flag_o(va_list list, int nb_char);
int flag_x(va_list list, int nb_char);
int flag_X(va_list list, int nb_char);
int flag_u(va_list list, int nb_char);
int flag_f(va_list list, int nb_char);
int flag_F(va_list list, int nb_char);
int flag_e(va_list list, int nb_char);
int flag_E(va_list list, int nb_char);
int flag_g(va_list list, int nb_char);
int flag_G(va_list list, int nb_char);
int flag_p(va_list list, int nb_char);
int flag_n(va_list list, int nb_char);
int flag_a(va_list list, int nb_char);
int flag_A(va_list list, int nb_char);

typedef struct list
{
    char letter;
    int (*ptr)(va_list, int);
    struct list *next;
} linked_list_t;

#endif /* !MY_H_ */
