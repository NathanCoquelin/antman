/*
** EPITECH PROJECT, 2023
** helper.c
** File description:
** helper functions
*/

#include "antman.h"

int my_arrlen(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
        i++;
    return i;
}

char *put_nbr_str(unsigned int n)
{
    int num_len = my_log(n, 10) + 1;
    char *res = malloc(sizeof(unsigned char) * (num_len + 5));

    res[0] = '\n';
    res[1] = '@';
    res[2] = 'n';
    input_num(res, n, num_len + 3);
    res[num_len + 3] = '\n';
    res[num_len + 4] = '\0';
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

    for (i = 0; str[i] != (unsigned char) 35 ||
        str[i + 1] != (unsigned char) 49 ||
        str[i + 2] != (unsigned char) 65; i++);
    return i + 3;
}
