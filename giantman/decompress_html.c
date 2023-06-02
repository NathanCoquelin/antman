/*
** EPITECH PROJECT, 2023
** decompress_html.c
** File description:
** uses lempel ziv to decompress file
*/

#include "giantman.h"

int decompress_html(char *filepath)
{
    giantman *giantman = malloc(sizeof(giantman));
    char *str;
    char *res;

    if (giantman == NULL)
        return 84;
    str = read_txt(filepath, giantman);
    if (str == NULL)
        return 84;
    res = lz_decompress(str, giantman);
    write(1, res, giantman->reslen);
    free(str);
    free(res);
    return 0;
}
