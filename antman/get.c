/*
** EPITECH PROJECT, 2023
** get.c
** File description:
** this will have the get functions
*/

#include "antman.h"

char *read_txt(const char *filename, antman *antman)
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
    antman->filelen = file_info.st_size;
    buffer = get_str(fd, file_info.st_size);
    close(fd);
    return buffer;
}

char *get_str(const int fd, const size_t size)
{
    char *buffer = malloc(sizeof(char) * (size + 1));

    buffer[size] = '\0';
    read(fd, buffer, size);
    return buffer;
}
