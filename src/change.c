/*
** EPITECH PROJECT, 2022
** change.c
** File description:
** change
*/

#include "../include/my_bsq.h"
#include <stdio.h>
int find_result(int **mat, char *buffer)
{
    int si_cf = 0; int res = 0; int f = 0; int min = 0; int c = 0;
    int nc = num_c(buffer); int nf = num_f(buffer); int k = 0;
    for (int i = 0; i < nf; i++) {
        for (int j = 0; j < nc; j++) {
            min = bubble(mat, i, j);
            mat[i][j] = mat[i][j] + min;
            si_cf = res_cf(res, mat[i][j]);
            res = res_f(res, mat[i][j], i);
            f = row(si_cf, f, i);
            c = col(si_cf, c, j);
        }
    }
    create_chartable(f, c, res, buffer);
    while (k < nf) {
        free(mat[k]); k++;
    }
    free(mat);
    return 0;
}

int bubble(int **mat, int i, int j)
{
    int res = 0; int m1 = 0; int m2 = 0; int m3 = 0;
    if (mat[i][j] != 0 && i > 0 && j > 0) {
        m1 = mat[i][j - 1];
        m2 = mat[i - 1][j];
        m3 = mat[i - 1][j - 1];
        res = min(m1, m2, m3);
    }
    return res;
}

int min(int m1, int m2, int m3)
{
    int res = 0;
    if (m1 <= m2 && m1 <= m3) {
        res = m1;
    } else if (m2 < m1 && m2 <= m3) {
        res = m2;
    } else {
        res = m3;
    }
    return res;
}

int res_cf(int res, int mat_pos)
{
    int m = 0;
    if (mat_pos > res) {
        m = 1;
    }
    return m;
}

int res_f(int res, int mat_pos, int i)
{
    if (mat_pos > res) {
        res = mat_pos;
    }
    return res;
}
