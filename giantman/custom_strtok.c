/*
** EPITECH PROJECT, 2023
** custom_strtok.c
** File description:
** Custom strtok for giantman
*/

#include "giantman.h"

unsigned int custom_strtok_cut(char *str, unsigned int *d,
    unsigned int encoded_len, unsigned int size)
{
    for (; (str[*d] != '\n' || str[*d + 1] != '@') && *d < encoded_len; (*d)++)
        size++;
    return size;
}

void custom_strtok_cut2(char *str, unsigned int *d,
    unsigned int encoded_len)
{
    (*d)++;
    for (; str[*d - 1] != '\n' && *d < encoded_len; (*d)++);
}

char **custom_strtok(char *str)
{
    unsigned int i = 0;
    unsigned int num_section = get_tot_size(str) + 2;
    unsigned int size;
    char **arr = malloc(sizeof(char *) * (num_section + 1));
    unsigned int encoded_len = custom_getnbr(str);
    unsigned int d = 0;

    arr[num_section] = NULL;
    for (;i < num_section - 1; i++, d++) {
        size = 0;
        size = custom_strtok_cut(str, &d, encoded_len, size);
        arr[i] = malloc(sizeof(char) * (size + 1));
        for (unsigned int j = 0; j < size; j++) {
            arr[i][j] = str[d - size + j];
        }
        arr[i][size] = '\0';
    }
    custom_strtok_cut2(str, &d, encoded_len);
    arr[i] = cp_str_index(str, d, encoded_len);
    return arr;
}
