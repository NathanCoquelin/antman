/*
** EPITECH PROJECT, 2023
** antman.h
** File description:
** Header file for the antman exectuable
*/

#ifndef __ANTMAN_H__
    #define __ANTMAN_H__
    #define WINDOW_SIZE (unsigned int) 1000
    #define FORMAT_LEN 8
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <fcntl.h>
    #include "my.h"

typedef struct dictionary {
    unsigned int offset;
    unsigned int length;
} dictionary;

typedef struct antman {
    size_t filelen;
    unsigned int reslen;
} antman;

/* compress_image.c */
int compress_image(char *filepath);

/* get_image.c */
char **read_image_file(char *filename);
char *get_str(int fd, size_t size);
void convert_image_file_cut(char **res, unsigned int non_encoding,
    char *encoded, unsigned int encoding_index);
char **convert_image_file(char **arr);

/* helper.c */
int my_arrlen(char **arr);
char *put_nbr_str(unsigned int n);
void input_num(char *dest, unsigned int num, int num_len);
void input_num_rec(char *dest, unsigned int num, int index);
unsigned int custom_strlen(char *str);

/* helper2.c */
void custom_putstr(char *str);
char *init_res(unsigned int len);
void append_res(char *str, dictionary dict, unsigned int *index);
void put_nbr_str2(char *str, unsigned int n, unsigned int index);

/* helper3.c */
void input_num2(char *dest, unsigned int num, unsigned int index);
void append_eof(char *str, unsigned int index);
unsigned int digit_len(unsigned int num);
void input_num_rec2(char *dest, unsigned int num, int index);

/* get.c */
char *read_txt(const char *filename, antman *antman);
char *get_str(const int fd, const size_t size);

/* free.c */
void free_char_arr(char **arr);

/* my_strcat_antman.c */
char *my_strcat_antman(char const *src1, char const *src2);

/* get_lz.c */
void find_match(const char *data, unsigned int pos, dictionary *dict);
char *lz_compress(const char *str, antman *antman);

/* compress_txt.c */
int compress_txt(char *filepath);

/* lz_html.c */
void lz_compress_html(const char *str, char *filepath);

/* compress_html.c */
int compress_html(char *filepath);

/* lz_image.c */
char *lz_image(char *str);

#endif
