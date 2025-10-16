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
int my_intlen_u(unsigned int nb);
int my_put_nbr_u(unsigned int nb);

void my_print_except(void);
int recursive(int n);
char get_sign_nb(int n);

int display_count(const char *format, va_list list, int nb_char);
void my_put_error(void);
int my_printf(const char *format, ...);

int flag_x(va_list list, int nb_char);
int flag_xu(va_list list, int nb_char);
int int_to_hexa(unsigned int nb, char *ref);
int long_to_hexa(unsigned long nb, char *ref);

int flag_d(va_list list, int nb_char);
int flag_percent(va_list list, int nb_char);
int flag_c(va_list list, int nb_char);
int flag_s(va_list list, int nb_char);
int flag_i(va_list list, int nb_char);
int flag_o(va_list list, int nb_char);
int flag_x(va_list list, int nb_char);
int flag_xu(va_list list, int nb_char);
int flag_u(va_list list, int nb_char);
int flag_f(va_list list, int nb_char);
int flag_fu(va_list list, int nb_char);
int flag_e(va_list list, int nb_char);
int flag_eu(va_list list, int nb_char);
int flag_g(va_list list, int nb_char);
int flag_gu(va_list list, int nb_char);
int flag_p(va_list list, int nb_char);
int flag_n(va_list list, int nb_char);
int flag_a(va_list list, int nb_char);
int flag_au(va_list list, int nb_char);

typedef struct list
{
    char letter;
    int (*ptr)(va_list, int);
    struct list *next;
} linked_list_t;

int find_flags(const char *format, linked_list_t *l_list, va_list list, int i);

linked_list_t *initialize_list(void);
void create_list2(linked_list_t **list);
void create_list1(linked_list_t **list);
int put_in_list1(linked_list_t **list, int *tab,
    int (*tab_ptr[11])(va_list, int), int i);
int put_in_list2(linked_list_t **list, int *tab,
    int (*tab_ptr[10])(va_list, int), int i);

#endif /* !MY_H_ */
