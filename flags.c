/*                                                                                                                                                                                            
** EPITECH PROJECT, 2025                                                                                                                                                                      
** flags                                                                                                                                                                                      
** File description:                                                                                                                                                                          
** All flags for the mini_printf function                                                                                                                                                     
*/
#include "include/my.h"
#include <stdarg.h>

int flag_char(int j, const char *format, va_list list, int nb_char)
{
    if (format[j] == 'c'){
        my_putchar((char) va_arg(list, int));
        nb_char++;
    }
    return nb_char;
}

int flag_str(int j, const char *format, va_list list, int nb_char)
{
    char *str;

    if (format[j] == 's'){
        str = va_arg(list, char *);
        my_putstr(str);
        nb_char += my_strlen(str);
    }
    return nb_char;
}

int flag_int(int j, const char *format, va_list list, int nb_char)
{
    int int_args = 0;

    if (format[j] == 'd' || format[j] == 'i'){
        int_args = va_arg(list, int);
        my_put_nbr(int_args);
        nb_char += my_intlen(int_args);
    }
    return nb_char;
}

int flag_percent(int j, const char *format, va_list list, int nb_char)
{
    if (format[j] == '%'){
	my_putchar('%');
        nb_char++;
    }
    return nb_char;
}
