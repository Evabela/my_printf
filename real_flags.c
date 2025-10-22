/*
** EPITECH PROJECT, 2025
** real_flags
** File description:
** Redirect in function of the flags
*/

void correct_flags(int *tab, int width, int precision)
{
    if (tab[1] == 1 && width == 0)
        tab[1] = 0;
    if (tab[2] == 1 && flag[0] == 1)
        tab[2] = 0;
    if (tab[4] == 1 && tab[1] == 1)
        tab[4] = 0;
    if (tab[4] == 1 && width == 0)
        tab[4] = 0;
}
