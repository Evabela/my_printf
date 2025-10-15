/*
** EPITECH PROJECT, 2025
** my_put_error
** File description:
** Display an error on his output
*/
#include <unistd.h>

void my_put_error(void)
{
    write(2, "84", 2);
}
