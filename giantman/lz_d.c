/*
** EPITECH PROJECT, 2023
** lz_d.c
** File description:
** lempel ziv decompression
*/

#include "giantman.h"

void append_char(char *str, char c, unsigned int *i)
{
    (*i)++;
    str[*i] = c;
}

void lz_decompress_cut(unsigned int *i, const char *str,
    char *res, unsigned int *k)
{
    unsigned int offset;
    unsigned int length;

    *i += 2;
    offset = custom_getnbr2(str, *i);
    *i += my_log(offset, 10) + 2;
    length = custom_getnbr2(str, *i);
    for (unsigned int j = 0; j < length; j++)
        append_char(res, res[offset + j], k);
    while (str[*i] != ')')
        (*i)++;
}

char *lz_decompress(const char *str, giantman *giantman)
{
    unsigned int i = 0;
    char *res = malloc(sizeof(char) * 4294967295);
    unsigned int str_length = giantman->filelen;
    unsigned int k = -1;

    for (; i <= str_length; i++) {
        if (str[i] == '@' && str[i + 1] == '(') {
            lz_decompress_cut(&i, str, res, &k);
            continue;
        }
        append_char(res, str[i], &k);
    }
    res[k + 1] = '\0';
    giantman->reslen = k;
    return res;
}
