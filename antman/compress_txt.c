/*
** EPITECH PROJECT, 2023
** compress_txt.c
** File description:
** This will compress text files
*/

#include "antman.h"

int compress_txt(char *filepath)
{
    antman *antman = malloc(sizeof(antman));
    char *str;
    char *res;

    if (antman == NULL) {
        my_printf("1\n");
        return 84;
    }
    str = read_txt(filepath, antman);
    if (str == NULL) {
        my_printf("2\n");
        return 84;
    }
    res = lz_compress(str, antman);
    write(1, res, antman->reslen);
    free(res);
    free(str);
    return 0;
}
