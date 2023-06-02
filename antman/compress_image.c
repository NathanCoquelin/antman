/*
** EPITECH PROJECT, 2023
** compress_image.c
** File description:
** This will have the main function to compress images
*/

#include "antman.h"

int compress_image(char *filepath)
{
    antman *antman = malloc(sizeof(antman));
    char *str;
    char *res;

    if (antman == NULL)
        return 84;
    str = read_txt(filepath, antman);
    if (str == NULL)
        return 84;
    res = lz_compress(str, antman);
    write(1, res, antman->reslen);
    free(res);
    free(str);
    return 0;
}
