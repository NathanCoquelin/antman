/*
** EPITECH PROJECT, 2023
** get.c
** File description:
** this will have the get functions
*/

#include "giantman.h"

int get_arr_len(char **arr)
{
    int i = 0;

    while (arr[i] != NULL)
        i++;
    return i;
}

unsigned int get_header_len(char **arr)
{
    unsigned int i = 0;
    unsigned int count = 0;

    while (arr[i] != NULL) {
        if (arr[i][0] == '@')
            count++;
        i++;
    }
    return count;
}

int get_encoding_len(char **arr)
{
    unsigned int i = get_header_len(arr);
    int len = 0;

    while (arr[i] != NULL) {
        len += my_strlen(arr[i]) + 1;
        i++;
    }
    return len;
}

char *my_giant_strcat(char *src1, char *src2)
{
    char *res = my_strcat(src1, src2);

    free(src1);
    return res;
}

unsigned int get_whole_arr_len(char **arr)
{
    unsigned int len = 1;
    unsigned int i = 0;

    for (; arr[i + 1] != NULL; i++)
        for (int j = 0; arr[i][j] != '\0'; j++)
            len++;
    len += custom_strlen(arr[i]);
    return len;
}
