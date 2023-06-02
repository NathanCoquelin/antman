/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** this functino will display the value of a string
*/

#include "my.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return 0;
}
