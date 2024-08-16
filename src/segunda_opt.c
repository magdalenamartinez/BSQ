/*
** EPITECH PROJECT, 2022
** segunda_opt.c
** File description:
** the other opt
*/
#include "../include/my_bsq.h"
#include <stdio.h>
int create_table(char *size, char *patron, int length)
{
    int num = 0; int n = 0; int i = 0; int j = 0; int t = 0;
    num = my_getnbr(size); char* buffer; int tam = num * num;
    buffer = (char*) malloc(sizeof(char) * (tam + num + tam_size(size) + 2));
    while (size[i] != '\0') {
        buffer[n] = size[i]; n++; i++;
    }
    buffer[n] = '\n'; i = 0; n++;
    while (num > i) {
        while (num > t) {
            buffer[n] = patron[j];
            j = max_length(j, length);
            t++; n++;
        }
        buffer[n] = '\n'; n++;
        t = 0; i++;
    }
    n--;
    buffer[n] = '\0'; n++;
    look_obtacles(buffer);
    free(buffer);
}

int max_length(int n, int len)
{
    if (n == len - 1) {
        n = 0;
    } else {
        n++;
    }
    return n;
}

int tam_size(char *size)
{
    int i = 0;
    while (size[i] != '\0') {
        i++;
    }
    return i;
}
