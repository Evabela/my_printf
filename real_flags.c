/*
** EPITECH PROJECT, 2025
** real_flags
** File description:
** Redirect in function of the flags
*/
#include "include/my.h"

void redirect_flag_nb(int *tab, int nb, int *nb_char)
{
    int char_nb = 0;

    correct_flags(tab);
    correct_flags2(tab);
    if (tab[0] == 1 && nb >= 0)
        function_pos(nb_char, '+');
    if (tab[1] == 1)
        function_alignement(nb, nb_char, tab[6]); // peut-être plus appeler une fonction qui récupère un nombre de charactère en fonction de ce qui est affiché et le passe en param
    if (tab[2] == 1  && nb >= 0)
        function_pos(nb_char, ' ');
    if (tab[3] == 1)
        function_sharp(nb_char, tab[5]);
    if (tab[4] == 1) {
        char_nb = tab[6] - my_int_len(nb); 
        function_spaces('0', nb_char, char_nb);
    }
    if (tab[6] > 0) {
        char_nb = tab[6] - my_int_len(nb);
        function_space(' ', nb_char, char_nb);
    }
}

void redirect_flag_dblnb(int *tab, double nb, int *nb_char)
{
    correct_flags(tab);
    correct_flags2(tab);
    if (tab[0] == 1 && nb >= 0)
        function_pos(nb_char, '+');
    if (tab[1] == 1)
        function_alignement(nb, nb_char, tab[6]);
    if (tab[2] == 1  && nb >= 0)
        function_pos(nb_char, ' ');
    if (tab[3] == 1)
        function_sharp(nb_char, tab[5]);
    if (tab[4] == 1)
        function_spaces('0', tab[6], nb_char, ...);
    if (tab[6] > 0)
        function_space(' ', tab[6], nb_char, ...);
}

void redirect_flag_unb(int *tab, unsigned int nb, int *nb_char)
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
