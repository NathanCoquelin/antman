/*
** EPITECH PROJECT, 2023
** decompress_txt.c
** File description:
** This will with decompress using lempel ziv for the antman project
*/

#include "giantman.h"

char *read_txt(const char *filename, giantman *giantman)
{
    int fd = open(filename, O_RDONLY);
    struct stat file_info;
    char *buffer;

    if (fd < 0) {
        close(fd);
        return NULL;
    }
    if (stat(filename, &file_info) < 0) {
        close(fd);
        return NULL;
    }
    giantman->filelen = file_info.st_size;
    buffer = get_str(fd, file_info.st_size);
    close(fd);
    return buffer;
}

int decompress_txt(char *filepath)
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
