/*
** EPITECH PROJECT, 2022
** mini_printf
** File description:
** This will show a formatted strings with values from the parameters
*/

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

#include "my.h"
#include "str_linked_list.h"
#include "flags.h"

int evaluate_flags(update_specifier_t *specifier_m, va_list arguments);
int my_putchar_printf(const char c, int *count);

specifier_t init_specifier_t(void)
{
    specifier_t specifier = {
        .flag = '\0',
        .min_width = 0,
        .precision = 6,
        .length_modifier = {'\0', '\0', NULL},
        .conversion_specifier = '\0'
    };
    return specifier;
}

update_specifier_t default_specifier_m(char *format)
{
    update_specifier_t specifier_m = {
        {
            .flag = '\0',
            .min_width = 0,
            .precision = 6,
            .length_modifier = NULL,
            .conversion_specifier = '\0'
        },
        NULL,
        format,
        0,
        0,
        0
    };
    return specifier_m;
}

int evaluate_and_disp(update_specifier_t *specifier_m, va_list arguments)
{
    int error = 0;
    char *format = (*specifier_m).format;
    int *i = &((*specifier_m).i);
    int *char_count = &((*specifier_m).char_count);

    if (format[*i] == '%') {
        evaluate_flags(specifier_m, arguments);
    } else
        my_putchar_printf(format[*i], char_count);
    return (*specifier_m).error;
}

int my_printf(const char *format, ...)
{
    va_list arguments;
    va_start(arguments, format);
    int error = 0;
    update_specifier_t specifier_m = default_specifier_m(format);
    char length_modifier[3] = {'\0', '\0', NULL};

    specifier_m.specifier.length_modifier = length_modifier;
    while (specifier_m.format[specifier_m.i] != '\0') {
        evaluate_and_disp(&specifier_m, arguments);
        (specifier_m.i)++;
    }
    va_end(arguments);
    if (specifier_m.error < 0)
        return -1;
    return specifier_m.char_count;
}
