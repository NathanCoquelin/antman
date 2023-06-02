/*
** EPITECH PROJECT, 2023
** custom_strtok2.c
** File description:
** continuation of custom_strtok.c
*/

#include "giantman.h"

unsigned int get_tot_size(char *str)
{
    unsigned int i = 0;
    unsigned int count = 0;

    while (str[i + 2] != '\0') {
        if (str[i] == '\n' && str[i + 1] == '@' &&
            str[i + 2] != 'n') {
            count++;
        }
        i++;
    }
    return count;
}

unsigned int get_index_of_len(char *str)
{
    unsigned int i = 2;

    while (str[i] != '\0') {
        if (str[i - 2] == '@' && str[i - 1] == 'n')
            return i;
        i++;
    }
    return 0;
}

unsigned int comp_char(unsigned char c, unsigned int n)
{
    n *= 10;
    n += (unsigned int) ((unsigned char) c - 48);
    return n;
}

unsigned int custom_getnbr(char *str)
{
    unsigned int n = 0;
    unsigned int i = get_index_of_len(str);

    while (str[i] != '\0' &&
        (char) str[i] >= '0' && (char) str[i] <= '9') {
        n = comp_char(str[i], n);
        i++;
    }
    return n + 3;
}

char *cp_str_index(char *str, unsigned int d, unsigned int len)
{
    char *res = malloc(sizeof(char) * len);

    for (unsigned int j = 0; j < len; j++) {
        res[j] = str[d + j];
    }
    return res;
}
