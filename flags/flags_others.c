/*
** EPITECH PROJECT, 2025
** flags_others
** File description:
** Flag for my_printf : p and additionnal functions
*/

#include <stdarg.h>
#include "../include/my.h"

int long_to_hexa(unsigned long nb, char *ref)
{
    if (nb != 0){
        long_to_hexa(nb / 16, ref);
        my_putchar(ref[(nb % 16)]);
    }
    return 0;
}

void flag_p(va_list list, int *nb_char, int *tab)
{
    unsigned long adress = (unsigned long) va_arg(list, void *);
    char ref[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9',
        'a', 'b', 'c', 'd', 'e', 'f'};

    //redirect_flag(tab, nb_char);
    my_putstr("0x");
    *nb_char = *nb_char + 2;
    long_to_hexa(adress, ref);
    while (adress != 0){
        adress = adress / 16;
        *nb_char = *nb_char + 1;
    }
}

void disp_dbl_hexa(double nb, int *nb_char, int exp, char *ref)
{
    my_putchar('0');
    my_putchar(ref[17]);
    my_putchar((int) nb + '0');
    if (nb > 1){
        my_putchar('.');
        *nb_char = *nb_char + 1;
    }
    while ((nb - (int) nb) * 16 != 0){
        nb -= (int) nb;
        nb *= 16;
        my_putchar(ref[(int) nb]);
        *nb_char = *nb_char + 1;
    }
    my_putchar(ref[16]);
    if (exp >= 0){
        my_putchar('+');
        *nb_char = *nb_char + 1;
    }
    my_put_nbr(exp);
    *nb_char = *nb_char + my_intlen(exp) + 4;
}

void flag_o(va_list list, int *nb_char, int *tab)
{
    unsigned int nb = va_arg(list, unsigned int);
    unsigned int result = 0;
    int i = 1;

    redirect_flag_unb(tab, nb, nb_char);
    if (nb == 0) {
        my_putchar('0');
        *nb_char = *nb_char + 1;
    } else {
        while (nb != 0) {
            result = result + (nb % 8) * i;
            nb = nb / 8;
            i = i * 10;
            *nb_char = *nb_char + 1;
        }
        my_put_nbr(result);
    }
}
