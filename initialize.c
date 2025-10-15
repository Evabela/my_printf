/*
** EPITECH PROJECT, 2025
** my_printf.c
** File description:
** create the array of doubles
*/
#include <stdlib.h>
#include "./include/my.h"

int put_in_list(linked_list_t **list, int *tab, int (*tab_ptr[11])
    (va_list, int), int i)
{
    linked_list_t *elem = malloc(sizeof(linked_list_t));

    elem->letter = tab[i];
    elem->ptr = *tab_ptr[i];
    *list = elem;
    return (0);
}

void create_list1(linked_list_t **list)
{
    int (*ptr_d)(va_list, int) = &flag_d;
    int (*ptr_percent)(va_list, int) = &flag_percent;
    int (*ptr_c)(va_list, int) = &flag_c;
    int (*ptr_s)(va_list, int) = &flag_s;
    int (*ptr_i)(va_list, int) = &flag_i;
    int (*ptr_o)(va_list, int) = &flag_o;
    int (*ptr_x)(va_list, int) = &flag_x;
    int (*ptr_X)(va_list, int) = &flag_X;
    int (*ptr_u)(va_list, int) = &flag_u;
    int tab[9] = {'d', '%', 'c', 's', 'i', 'o', 'x', 'X', 'u'};
    int (*tab_ptr[10])(va_list, int) = {ptr_d, ptr_percent,
        ptr_c, ptr_s, ptr_i, ptr_o, ptr_x, ptr_X, ptr_u};

    for (int i = 0; i < 9; i++)
        put_in_list(list, tab, tab_ptr, i);
}

void create_list2(linked_list_t **list)
{
    int (*ptr_f)(va_list, int) = &flag_f;
    int (*ptr_F)(va_list, int) = &flag_F;
    int (*ptr_e)(va_list, int) = &flag_e;
    int (*ptr_E)(va_list, int) = &flag_E;
    int (*ptr_g)(va_list, int) = &flag_g;
    int (*ptr_G)(va_list, int) = &flag_G;
    int (*ptr_p)(va_list, int) = &flag_p;
    int (*ptr_n)(va_list, int) = &flag_n;
    int (*ptr_a)(va_list, int) = &flag_a;
    int (*ptr_A)(va_list, int) = &flag_A;
    int tab[10] = {'f', 'F', 'e', 'E', 'g', 'G', 'p', 'n', 'a', 'A'};
    int (*tab_ptr[11])(va_list, int) = {ptr_f, ptr_F,
        ptr_e, ptr_E, ptr_g, ptr_G, ptr_p, ptr_n, ptr_a, ptr_A};

    for (int i = 0; i < 10; i++)
        put_in_list(list, tab, tab_ptr, i);
}

linked_list_t *initialize_list(void)
{
    linked_list_t *list = NULL;

    create_list1(&list);
    create_list2(&list);
    return (list);
}
