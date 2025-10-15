/*
** EPITECH PROJECT, 2025
** my_intlen
** File description:
** Return len of an integer
*/

int my_intlen(int nb)
{
    int res = 0;

    while (nb != 0){
        res++;
        nb = nb / 10;
    }
    return res;
}
