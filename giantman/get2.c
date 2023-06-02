/*
** EPITECH PROJECT, 2023
** get2.c
** File description:
** continuation of get.c
*/

#include "giantman.h"

unsigned int get_tot_header_len(char **arr, int header_len)
{
    unsigned int count = 0;

    for (int i = 0; i < header_len - 1; i++)
        count += my_strlen(arr[i]);
    return count;
}

unsigned int comp_char2(char c, unsigned int number)
{
    if ((unsigned char)c >= '0' && (unsigned char)c <= '9'){
        number *= 10;
        number += (int)((unsigned char)c - 48);
    }
    return number;
}

unsigned int custom_getnbr2(char const *str, unsigned int i)
{
    unsigned int number = 0;

    while (str[i] != '\0' &&
        ((unsigned char) str[i] >= '0' &&
        (unsigned char) str[i] <= '9')) {
        number = comp_char2(str[i], number);
        i++;
    }
    return number;
}

char *get_str(const int fd, const size_t size)
{
    char *buffer = malloc(sizeof(char) * (size + 1));

    buffer[size] = '\0';
    read(fd, buffer, size);
    return buffer;
}
