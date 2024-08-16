/*
** EPITECH PROJECT, 2022
** square.c
** File description:
** square
*/
#include <stdio.h>
#include "../include/my_bsq.h"
int look_obtacles(char *buffer)
{
    int i = 0; int nf = 0; int nc = 0; nf = num_f(buffer);
    i = 0; int j = 0; int n = 0; nc = num_c(buffer);
    i = n_line(buffer);
    int **mat = (int**) malloc(sizeof(int*) * (nf));
    for (int m = 0; m < nf; m++) {
            mat[m] = (int*) malloc(sizeof(int) * (nc));
    }
    while (buffer[i] != '\0') {
        if (buffer[i] == '.') {
            mat[n][j] = 1; j++;
        }
        if (buffer[i] == 'o') {
            mat[n][j] = 0; j++;
        }
        if (buffer[i] != 'o' && buffer[i] != '.') {
            n++; j = 0;
        }
        i++;
    }
    i = 0; find_result(mat, buffer); return 0;
}

int total(char *buffer)
{
    int i = 0;
    while (buffer[i] != '\0') {
        i++;
    }
    return (i - 1);
}

int num_f(char *buffer)
{
    char *num; int i = 0; int n = 0;
    while (buffer[i] != '\n') {
        i++;
    } i++;
    num = malloc(sizeof(char) * (i + 1)); i = 0;
    while (buffer[i] != '\n') {
        num[i] = buffer[i]; i++;
    }
    num[i] = '\0';
    n = my_getnbr(num); free(num);
    return n;
}

int num_c(char *buffer)
{
    int i = 0; int countercol = 0;
    while (buffer[i] != '\n') {
        i++;
    }
    i++;
    while (buffer[i] != '\n') {
        i++; countercol++;
    }
    return countercol;
}

int n_line(char *buffer)
{
    int i = 0;
    while (buffer[i] != '\n') {
        i++;
    }
    return (i + 1);
}
