/*
** EPITECH PROJECT, 2025
** real_flags
** File description:
** Redirect in function of the flags
*/
#include "include/my.h"

void redirect_flag_nb(int *tab, int nb, int *nb_char)
{
    correct_flags(tab);
    correct_flags2(tab);
    if (tab[0] == 1 && nb >= 0)
        function_pos(nb_char, '+');
    if (tab[1] == 1)
        function_alignement(nb_char, tab[6]);
    if (tab[2] == 1 && nb >= 0)
        function_pos(nb_char, ' ');
    if (tab[3] == 1)
        function_sharp(nb_char, tab[5]);
    if (tab[4] == 1)
        function_spaces('0', nb_char, tab[6] - my_intlen(nb));
    if (tab[6] > 0)
        function_spaces(' ', nb_char, tab[6] - my_intlen(nb));
}

void redirect_flag_dblnb(int *tab, double nb, int *nb_char)
{
    correct_flags(tab);
    correct_flags2(tab);
    if (tab[0] == 1 && nb >= 0)
        function_pos(nb_char, '+');
    if (tab[1] == 1)
        function_alignement(nb_char, tab[6]);
    if (tab[2] == 1 && nb >= 0)
        function_pos(nb_char, ' ');
    if (tab[3] == 1)
        function_sharp(nb_char, tab[5]);
    if (tab[4] == 1)
        function_spaces('0', nb_char, tab[6] - my_intlen(nb));
    if (tab[6] > 0)
        function_spaces(' ', nb_char, tab[6] - my_intlen(nb));
}

void redirect_flag_unb(int *tab, unsigned int nb, int *nb_char)
{
    correct_flags(tab);
    correct_flags2(tab);
    if (tab[0] == 1)
        function_pos(nb_char, '+');
    if (tab[1] == 1)
        function_alignement(nb_char, tab[6]);
    if (tab[2] == 1)
        function_pos(nb_char, ' ');
<<<<<<< HEAD
    if (tab[3] == 1)
        function_sharp(nb_char, tab[5]);
    if (tab[4] == 1)
        function_spaces('0', tab[6], nb_char, ...);
    if (tab[6] > 0)
        function_space(' ', tab[6], nb_char, ...);
}

void redirect_flag_str(int *tab, char *str, int *nb_char)
{
    correct_flags(tab);
    correct_flags2(tab);
    if (tab[0] == 1)
        function_pos(nb_char, '+');
    if (tab[1] == 1)
        function_alignement(nb, nb_char, tab[6]);
    if (tab[2] == 1)
        function_pos(nb, nb_char, ' ');
    if (tab[3] == 1)
        function_sharp(nb_char, tab[5]);
    if (tab[4] == 1)
        function_spaces('0', tab[6], nb_char, ...);
    if (tab[6] > 0)
        function_space(' ', tab[6], nb_char, ...);
}

void redirect_flag_char(int *tab, char c, int *nb_char)
{
    correct_flags(tab);
    correct_flags2(tab);
    if (tab[0] == 1)
        function_pos(nb_char, '+');
    if (tab[1] == 1)
        function_alignement(nb, nb_char, tab[6]);
    if (tab[2] == 1)
        function_pos(nb, nb_char, ' ');
=======
>>>>>>> d075685df2e83fb7de0a0429c55ebaf0e18e1d13
    if (tab[3] == 1)
        function_sharp(nb_char, tab[5]);
    if (tab[4] == 1)
        function_spaces('0', nb_char, tab[6] - my_intlen(nb));
    if (tab[6] > 0)
        function_spaces(' ', nb_char, tab[6] - my_intlen(nb));
}
