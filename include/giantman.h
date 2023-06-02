/*
** EPITECH PROJECT, 2023
** giantman.h
** File description:
** Header file for the giantman executable
*/

#ifndef __GIANTMAN_H__
    #define __GIANTMAN_H__
    #include <stdlib.h>
    #include <sys/stat.h>
    #include <unistd.h>
    #include <fcntl.h>

    #include "my.h"

typedef struct dictionary {
    unsigned int offset;
    unsigned int length;
} dictionary;

typedef struct giantman {
    size_t filelen;
    unsigned int reslen;
} giantman;

/* decompress_image.c */
int decompress_image(char *filepath);

/* helper.c */
char *cp_header(char *str);
char *cp_encoded_img(unsigned int c);
void input_num(char *dest, unsigned int num, int num_len);
void input_num_rec(char *dest, unsigned int num, int index);
unsigned int custom_strlen(char *str);

/* helper2.c */
void custom_putstr(char *str);
void custom_strcat(char *dest, unsigned int index,
    unsigned int len, char **arr);
/* get.c */
int get_arr_len(char **arr);
unsigned int get_header_len(char **arr);
int get_encoding_len(char **arr);
char *my_giant_strcat(char *src1, char *src2);
unsigned int get_whole_arr_len(char **arr);

/* get2.c */
unsigned int get_tot_header_len(char **arr, int header_len);
unsigned int comp_char2(char c, unsigned int number);
unsigned int custom_getnbr2(char const *str, unsigned int i);
char *get_str(int fd, size_t size);

/* custom_strtok.c */
unsigned int custom_strtok_cut(char *str, unsigned int *d,
    unsigned int encoded_len, unsigned int size);
void custom_strtok_cut2(char *str, unsigned int *d,
    unsigned int encoded_len);
char **custom_strtok(char *str);

/* custom_strtok2.c */
unsigned int get_tot_size(char *str);
unsigned int get_index_of_len(char *str);
unsigned int comp_char(unsigned char c, unsigned int n);
unsigned int custom_getnbr(char *str);
char *cp_str_index(char *str, unsigned int d, unsigned int len);

/* free.c */
void free_char_arr(char **arr);

/* decompress_txt.c */
char *read_txt(const char *filename, giantman *giantman);
int decompress_txt(char *filepath);

/* lz_d.c */
void append_char(char *str, char c, unsigned int *i);
void lz_decompress_cut(unsigned int *i,
    const char *str, char *res, unsigned int *k);
char *lz_decompress(const char *str, giantman *giantman);

/* decompress_html.c */
int decompress_html(char *filepath);

#endif
