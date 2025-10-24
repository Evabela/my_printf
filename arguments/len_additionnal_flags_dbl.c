/*
** EPITECH PROJECT, 2025
** len_additionnal_flags_dbl
** File description:
** Check and return either 0 or the width less number of characters printed
*/

int my_floatlen(double nb)
{
    return 0;
}

int my_glen(double nb)
{
    double temp = nb;
    int len = 0;

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

int my_floathexalen(double nb)
{
    return 0;
}

int my_explen(double nb)
{
    if (nb == 0.0)
        if ((1.0 / nb) < 0.0)
            sign = 1;
    if (nb < 0.0 || sign == 1) {
        return 13;
    }
    return 12;
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
