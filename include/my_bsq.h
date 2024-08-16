/*
** EPITECH PROJECT, 2022
** my_bsq.h
** File description:
** mybsq
*/

#ifndef MY_BSQ_H_
    #define MY_BSQ_H_
    #define MAXBUF 200000
    #include <fcntl.h>
    #include <sys/types.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include "my.h"
    int bsq_file(int argc, char **argv);
    int bsq_create(int argc, char **argv);
    int look_obtacles(char *buffer);
    int num_f(char *buffer);
    int num_c(char *buffer);
    int n_line(char *buffer);
    int total(char *buffer);
    int argv_long(char *buffer);
    int find_result(int **mat, char* buffer);
    int bubble(int **mat, int i, int j);
    int min(int m1, int m2, int m3);
    int res_cf(int res, int mat_pos);
    int res_f(int res, int mat_pos, int i);
    int row(int si_cf, int f, int i);
    int col(int si_cf, int c, int j);
    int create_chartable(int f, int c, int res, char *buffer);
    char **square_x(int f, int c, int res, char **mat);
    int imprime_square(char *buffer, char** mat);
    int create_table(char *size, char *patron, int length);
    int max_length(int n, int len);
    int tam_size(char *size);
#endif /*MY_BSQ_H_*/
