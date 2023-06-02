/*
** EPITECH PROJECT, 2023
** my_strcat_antman.c
** File description:
** custom strcat for antman
*/

#include "antman.h"

char *my_strcat_antman(char const *src1, char const *src2)
{
    int src1_len = my_strlen(src1);
    char *res = malloc(sizeof(char) * (src1_len + my_strlen(src2) + 1));

    for (unsigned int i = 0; src1[i] != '\0'; i++)
        res[i] = src1[i];
    for (unsigned int j = 0; src2[j] != '\0'; j++)
        res[j + src1_len] = src2[j];
    res[src1_len + my_strlen(src2)] = '\0';
    return res;
}
