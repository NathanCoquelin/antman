/*
** EPITECH PROJECT, 2022
** my_strcat
** File description:
** Day 06 task not done
*/

#include <stdlib.h>

int my_strlen(char const *str);

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
