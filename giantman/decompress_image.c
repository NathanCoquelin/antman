/*
** EPITECH PROJECT, 2023
** decompress_image.c
** File description:
** This will decode the file and uncompress it
*/

#include "giantman.h"

int decompress_image(char *filepath)
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
