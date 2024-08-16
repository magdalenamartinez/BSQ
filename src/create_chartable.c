/*
** EPITECH PROJECT, 2022
** create_chartable.c
** File description:
** change to char
*/
#include <stdio.h>
#include "../include/my_bsq.h"
int create_chartable(int f, int c, int res, char *buffer)
{
    int nc = 0; int nf = 0; int i = 0; int j = 0;
    nc = num_c(buffer); nf = num_f(buffer); int n = 0;
    char **mat = (char**) malloc(sizeof(char*) * nf);
    for (int m = 0; m < nf; m++) {
        mat[m] = (char*) malloc(sizeof(char) * (nc + 1));
    }
    i = n_line(buffer);
    while (buffer[i] != '\0') {
        if (buffer[i] == '\n') {
            mat[n][j] = '\0'; n++; j = 0;
        } else {
            mat[n][j] = buffer[i]; j++;
        }
        i++;
    }
    i = 0;
    mat = square_x(f, c, res, mat);
    imprime_square(buffer, mat);
    return 0;
}

char** square_x(int f, int c, int res, char **mat)
{
    int res2 = 0; int rcopia = 0; int ccopia = 0;
    rcopia = res; ccopia = c; res2 = res;
    while (f >= 0 && c >= 0 && res > 0) {
        while (res2 > 0) {
            mat[f][c] = 'x';
            c--;
            res2--;
        }
        res2 = rcopia;
        c = ccopia;
        f--;
        res--;
    }
    return mat;
}

int imprime_square(char *buffer, char **mat)
{
    int nc = 0; int nf = 0; int k = 0;
    nc = num_c(buffer);
    nf = num_f(buffer);
    for (int i = 0; i < nf; i++) {
        for (int j = 0; j < nc; j++) {
            my_putchar(mat[i][j]);
        }
        my_putchar('\n');
    }
    while (k < nf) {
        free(mat[k]); k++;
    }
    free(mat);
    return 0;
}
