/*
** EPITECH PROJECT, 2023
** free.c
** File description:
** this will free malloc in the context of the antman project
*/

#include "giantman.h"

void free_char_arr(char **arr)
{
    for (unsigned int i = 0; arr[i] != NULL; i++)
        free(arr[i]);
    free(arr);
}
