/*
** EPITECH PROJECT, 2023
** helper3.c
** File description:
** continuation of helper2.c
*/

#include "antman.h"

void input_num2(char *dest, unsigned int num, unsigned int index)
{
    if (num == 0)
        dest[index] = '0';
    else
        input_num_rec2(dest, num, index);
}

void input_num_rec2(char *dest, unsigned int num, int index)
{
    if (num > 0) {
        index--;
        input_num_rec2(dest, num / 10, index);
        dest[index] = num % 10 + '0';
    } else
        return;
}

void append_eof(char *str, unsigned int index)
{
    str[index] = (unsigned char) 35;
    str[index + 1] = (unsigned char) 49;
    str[index + 2] = (unsigned char) 65;
}

unsigned int digit_len(unsigned int num)
{
    unsigned int len = 1;

    while (num >= 10) {
        num /= 10;
        len++;
    }
    return len;
}
