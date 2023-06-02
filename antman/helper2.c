/*
** EPITECH PROJECT, 2023
** helper2.c
** File description:
** continuation of helper.c
*/

#include "antman.h"

void custom_putstr(char *str)
{
    write(1, str, custom_strlen(str));
}

char *init_res(unsigned int len)
{
    char *res = malloc(sizeof(char) * (len + 3));

    res[len] = (unsigned char) 35;
    res[len + 1] = (unsigned char) 49;
    res[len + 2] = (unsigned char) 65;
    return res;
}

void append_res(char *str, dictionary dict, unsigned int *index)
{
    unsigned int len1 = digit_len(dict.offset);
    unsigned int len2 = digit_len(dict.length);

    str[*index] = '@';
    (*index)++;
    str[*index] = '(';
    (*index)++;
    put_nbr_str2(str, dict.offset, *index + len1);
    *index += len1;
    str[*index] = ':';
    (*index)++;
    put_nbr_str2(str, dict.length, *index + len2);
    *index += len2;
    str[*index] = ')';
}

void put_nbr_str2(char *str, unsigned int n, unsigned int index)
{
    input_num2(str, n, index);
}
