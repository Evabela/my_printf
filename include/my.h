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
void my_put_dbl(double temp, double nb, double ten, int *nb_char);

void my_print_except(void);
int recursive(int n);
char get_sign_nb(int n);

int display_count(const char *format, va_list list, int *nb_char);
void my_put_error(void);
int my_printf(const char *format, ...);

void correct_flags(int *tab);
void correct_flags2(int *tab);

void flag_x(va_list list, int *nb_char, int *tab);
void flag_xu(va_list list, int *nb_char, int *tab);
int int_to_hexa(unsigned int nb, char *ref);
int long_to_hexa(unsigned long nb, char *ref);
void disp_dbl_hexa(double nb, int *nb_char, int exp, char *ref);
void my_put_dbl(double temp, double nb, double ten, int *nb_char);
void negative_e(double nb, char letter);
void positive_e(double nb, char letter);

void flag_d(va_list list, int *nb_char, int *tab);
void flag_percent(va_list list, int *nb_char, int *tab);
void flag_c(va_list list, int *nb_char, int *tab);
void flag_s(va_list list, int *nb_char, int *tab);
void flag_i(va_list list, int *nb_char, int *tab);
void flag_o(va_list list, int *nb_char, int *tab);
void flag_x(va_list list, int *nb_char, int *tab);
void flag_xu(va_list list, int *nb_char, int *tab);
void flag_u(va_list list, int *nb_char, int *tab);
void flag_f(va_list list, int *nb_char, int *tab);
void flag_fu(va_list list, int *nb_char, int *tab);
void flag_e(va_list list, int *nb_char, int *tab);
void flag_eu(va_list list, int *nb_char, int *tab);
void flag_g(va_list list, int *nb_char, int *tab);
void flag_gu(va_list list, int *nb_char, int *tab);
void flag_p(va_list list, int *nb_char, int *tab);
void flag_n(va_list list, int *nb_char, int *tab);
void flag_a(va_list list, int *nb_char, int *tab);
void flag_au(va_list list, int *nb_char, int *tab);

void redirect_flag(int *tab, int *nb_char);
void function_spaces(char letter, int *nb_char, int len);
void function_sharp(int *nb_char, int tab);
void function_pos(int *nb_char, char letter);
void function_alignement(int *nb_char, int tab);

typedef struct list
{
    char letter;
    void (*ptr)(va_list, int *, int *);
    struct list *next;
} linked_list_t;

int find_flags(const char *format, linked_list_t *l_list, va_list list, int *i);
void find_number(int *i, const char *format, int *width, int *precision);

linked_list_t *initialize_list(void);
void create_list2(linked_list_t **list);
void create_list1(linked_list_t **list);
int put_in_list1(linked_list_t **list, int *tab,
    void (*tab_ptr[11])(va_list, int *, int *), int i);
int put_in_list2(linked_list_t **list, int *tab,
    void (*tab_ptr[10])(va_list, int *, int *), int i);

void redirect_flag(int *tab, int *nb_char);

#endif /* !MY_H_ */
