/*
** EPITECH PROJECT, 2022
** change2.c
** File description:
** change aux
*/

int  row(int si_cf, int f, int i)
{
    int res = 0;
    if (si_cf == 1) {
        res = i;
    } else {
        res = f;
    }
    return res;
}

int col (int si_cf, int c, int j)
{
    int res = 0;
    if (si_cf == 1) {
        res = j;
    } else {
        res = c;
    }
    return res;
}
