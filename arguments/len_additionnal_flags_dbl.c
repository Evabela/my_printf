/*
** EPITECH PROJECT, 2025
** len_additionnal_flags_dbl
** File description:
** Check and return either 0 or the width less number of characters printed
*/

#include "../include/my.h"

static int count_floatlen(double ten, double nb, double temp, int nb_char)
{
    while (nb >= 1.0){
        while (temp >= 10.0){
            temp = temp / 10.0;
            ten *= 10;
        }
        nb = nb - (int) temp * ten / 10;
        nb_char++;
        temp = nb;
        ten = 10;
    }
    nb_char++;
    for (int i = 0; i < 6; i++){
        nb *= 10;
        nb_char++;
        nb -= (int) nb;
    }
    return nb_char;
}

int my_floatlen(double nb)
{
    int nb_char = 0;
    int i = 0;

    if ((int) nb == 0)
        nb_char = nb_char + 1;
    if (nb < 0.0){
        nb_char = nb_char + 1;
        nb -= 0.0000005;
        nb = - nb;
    } else
        nb += 0.0000005;
    nb_char += count_floatlen(10, nb, nb, nb_char);
    return nb_char;
}

int my_explen(double nb)
{
    int sign = 0;

    if (nb == 0.0)
        if ((1.0 / nb) < 0.0)
            sign = 1;
    if (nb < 0.0 || sign == 1) {
        return 13;
    }
    return 12;
}

int my_glen(double nb)
{
    double temp = nb;
    int len = 0;
    int exponent = 0;

    if ((int)nb == 0 && nb != 0.0)
        while ((int)nb == 0) {
            nb = nb * 10;
            exponent -= 1;
        }
    else
        while ((int)nb >= 10 || (int)nb < 0) {
            nb = nb / 10;
            exponent += 1;
        }
    if (exponent < -4 || exponent >= 6)
        len = my_explen(temp);
    else
        len = my_floatlen(nb);
    return len;
}

static int count_dbl_hexa(double nb, int exp, int nb_char)
{
    if (nb > 1)
        nb_char = nb_char + 1;
    while ((nb - (int) nb) * 16 != 0){
        nb -= (int) nb;
        nb *= 16;
        nb_char = nb_char + 1;
    }
    if (exp >= 0)
        nb_char = nb_char + 1;
    nb_char = nb_char + my_intlen(exp) + 4;
    return nb_char;
}

int my_floathexalen(double nb)
{
    int exp = 0;
    int nb_char = 0;

    if (nb < 0){
        nb_char = nb_char + 1;
        nb = - nb;
    }
    while (nb >= 2){
        nb = nb / 2;
        exp++;
    }
    while (nb < 1 && nb != 0){
        nb *= 2;
        --exp;
    }
    nb_char += count_dbl_hexa(nb, exp, nb_char);
    return nb_char;
}

int len_additionnal_dbl(int *tab, int *nb_char, double nb)
{
    int res = tab[6];
    char letter = tab[5];

    if (letter == 'f' || letter == 'F')
        res -= my_floatlen(nb);
    if (letter == 'g' || letter == 'G')
        res -= my_glen(nb);
    if (letter == 'e' || letter == 'E')
        res -= my_explen(nb);
    if (letter == 'a' || letter == 'A')
        res -= my_floathexalen(nb);
    if (res > 0){
        *nb_char += res;
        return res;
    }
    return 0;
}
