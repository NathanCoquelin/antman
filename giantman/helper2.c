/*
** EPITECH PROJECT, 2023
** helper2.c
** File description:
** continuation of helper.c
*/

#include "giantman.h"

void custom_putstr(char *str)
{
    write(1, str, custom_strlen(str));
}

void custom_strcat(char *dest, unsigned int index,
    unsigned int len, char **arr)
{
    unsigned int header_len = get_header_len(arr);
    char *current_input;
    unsigned int current_index = 0;

    for (unsigned int i = 0; i < len - 3; i++) {
        current_input = cp_encoded_img((int)
            ((unsigned char) arr[header_len][i]));
        for (int j = 0; current_input[j] != '\0'; j++) {
            dest[index + current_index + j] = current_input[j];
        }
        current_index += my_strlen(current_input);
        free(current_input);
    }
}
