/*
** EPITECH PROJECT, 2023
** lz.c
** File description:
** lempel ziv implementation for antman
*/

#include "antman.h"

void find_match(const char *data, unsigned int pos, dictionary *dict)
{
    unsigned int max_len = 0;
    unsigned int max_offset = 0;
    unsigned int len;

    for (unsigned int i = 0; i < WINDOW_SIZE; i++) {
        len = 0;
        for (unsigned int j = 0; i + j < pos && data[i + j] ==
            data[pos + j]; j++) {
            len++;
        }
        if (len > max_len) {
            max_len = len;
            max_offset = i;
        }
    }
    dict->offset = max_offset;
    dict->length = max_len;
}

char *lz_compress(const char *str, antman *antman)
{
    unsigned int i = 0;
    dictionary *dict = malloc(sizeof(struct dictionary));
    unsigned int length = antman->filelen;
    char *res = malloc(sizeof(char) * (length + 1));
    unsigned int index = 0;

    res[length] = '\0';
    for (; i < length; i++, index++) {
        find_match(str, i, dict);
        if (dict->length > FORMAT_LEN) {
            append_res(res, *dict, &index);
            i += dict->length - 1;
            continue;
        }
        res[index] = str[i];
    }
    res[index] = '\0';
    antman->reslen = index;
    return res;
}
