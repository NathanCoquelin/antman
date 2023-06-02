/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** The main file for the compression antman executable
*/

#include "antman.h"

int main(int argc, char **argv)
{
    if (argc != 3)
        return 84;
    if (my_strcmp(argv[2], "3") == 0)
        return compress_image(argv[1]);
    if (my_strcmp(argv[2], "2") == 0)
        return compress_html(argv[1]);
    if (my_strcmp(argv[2], "1") == 0)
        return compress_txt(argv[1]);
    return 84;
}
