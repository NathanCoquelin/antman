/*
** EPITECH PROJECT, 2023
** helper.c
** File description:
** helper functions for giantman
*/

#include "giantman.h"

char *cp_header(char *str)
{
    int str_len = my_strlen(str);
    char *res = malloc(sizeof(char) * (str_len + 1));

    res[str_len - 1] = '\n';
    res[str_len] = '\0';
    for (int i = 1; i < str_len; i++)
        res[i - 1] = str[i];
    return res;
}

char *cp_encoded_img(unsigned int c)
{
    int num_len = my_log(c, 10) + 1;
    char *res = malloc(sizeof(unsigned char) * (num_len + 2));

    input_num(res, c, num_len);
    res[num_len] = '\n';
    res[num_len + 1] = '\0';
    return res;
}

void input_num(char *dest, unsigned int num, int num_len)
{
    if (num == 0)
        dest[0] = '0';
    else
        input_num_rec(dest, num, num_len);
}

void input_num_rec(char *dest, unsigned int num, int index)
{
    if (num > 0) {
        index--;
        input_num_rec(dest, num / 10, index);
        dest[index] = num % 10 + '0';
    } else
        return;
}

unsigned int custom_strlen(char *str)
{
    unsigned int i;

    for (i = 0; (str[i + 1] != (unsigned char) 35 ||
        str[i + 2] != (unsigned char) 49 ||
        str[i + 3] != (unsigned char) 65); i++);
    return i;
}
