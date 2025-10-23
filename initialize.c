/*
** EPITECH PROJECT, 2025
** my_printf.c
** File description:
** create a linked list
*/
#include <stdlib.h>
#include "./include/my.h"

int put_in_list1(linked_list_t **list, int *tab, void (*tab_ptr[11])
    (va_list, int *, int *), int i)
{
    linked_list_t *elem = malloc(sizeof(linked_list_t));

    elem->letter = tab[i];
    elem->ptr = *tab_ptr[i];
    elem->next = *list;
    *list = elem;
    return (0);
}

int put_in_list2(linked_list_t **list, int *tab, void (*tab_ptr[10])
    (va_list, int *, int *), int i)
{
    linked_list_t *elem = malloc(sizeof(linked_list_t));

    elem->letter = tab[i];
    elem->ptr = *tab_ptr[i];
    elem->next = *list;
    *list = elem;
    return (0);
}

void create_list1(linked_list_t **list)
{
    void (*ptr_d)(va_list, int *, int *) = &flag_d;
    void (*ptr_percent)(va_list, int *, int *) = &flag_percent;
    void (*ptr_c)(va_list, int *, int *) = &flag_c;
    void (*ptr_s)(va_list, int *, int *) = &flag_s;
    void (*ptr_i)(va_list, int *, int *) = &flag_i;
    void (*ptr_o)(va_list, int *, int *) = &flag_o;
    void (*ptr_x)(va_list, int *, int *) = &flag_x;
    void (*ptr_xu)(va_list, int *, int *) = &flag_xu;
    void (*ptr_u)(va_list, int *, int *) = &flag_u;
    int tab[9] = {'d', '%', 'c', 's', 'i', 'o', 'x', 'X', 'u'};
    void (*tab_ptr[10])(va_list, int *, int *) = {ptr_d, ptr_percent,
        ptr_c, ptr_s, ptr_i, ptr_o, ptr_x, ptr_xu, ptr_u};

    for (int i = 0; i < 9; i++)
        put_in_list2(list, tab, tab_ptr, i);
}

void create_list2(linked_list_t **list)
{
    void (*ptr_f)(va_list, int *, int *) = &flag_f;
    void (*ptr_fu)(va_list, int *, int *) = &flag_fu;
    void (*ptr_e)(va_list, int *, int *) = &flag_e;
    void (*ptr_eu)(va_list, int *, int *) = &flag_eu;
    void (*ptr_g)(va_list, int *, int *) = &flag_g;
    void (*ptr_gu)(va_list, int *, int *) = &flag_gu;
    void (*ptr_p)(va_list, int *, int *) = &flag_p;
    void (*ptr_n)(va_list, int *, int *) = &flag_n;
    void (*ptr_a)(va_list, int *, int *) = &flag_a;
    void (*ptr_au)(va_list, int *, int *) = &flag_au;
    int tab[10] = {'f', 'F', 'e', 'E', 'g', 'G', 'p', 'n', 'a', 'A'};
    void (*tab_ptr[11])(va_list, int *, int *) = {ptr_f, ptr_fu,
        ptr_e, ptr_eu, ptr_g, ptr_gu, ptr_p, ptr_n, ptr_a, ptr_au};

    for (int i = 0; i < 10; i++)
        put_in_list1(list, tab, tab_ptr, i);
}

linked_list_t *initialize_list(void)
{
    linked_list_t *list = NULL;
    linked_list_t *tete;

    create_list1(&list);
    create_list2(&list);
    tete = list;
    while (list->next != NULL)
        list = list->next;
    list->next = tete;
    return (list);
}
