/*
** EPITECH PROJECT, 2023
** giantman/main.c
** File description:
** main for the giantman executable
*/

#include "giantman.h"

int main(int argc, char *argv[])
{
    if (argc != 3)
        return 84;
    if (my_strcmp(argv[2], "3") == 0)
        return decompress_image(argv[1]);
    if (my_strcmp(argv[2], "1") == 0)
        return decompress_txt(argv[1]);
    if (my_strcmp(argv[2], "2") == 0)
        return decompress_html(argv[1]);
    return 84;
}
