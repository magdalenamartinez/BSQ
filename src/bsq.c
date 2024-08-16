/*
** EPITECH PROJECT, 2022
** bsq.c
** File description:
** bsq
*/

#include "../include/my_bsq.h"
#include <stdio.h>

int bsq_file(int argc, char **argv)
{
    char buffer[MAXBUF] = "NULL";
    int len = 0;
    int offset = 0;
    int i = 0;
    int file = 0;
    file = open(argv[argc - 1], O_RDONLY);
    if (file == -1) {
        my_putstr("No such file or directory\n");
        return -1;
    } else {
        while ((len = read(file, buffer + offset, MAXBUF - offset)) > 0) {
            offset += len;
        }
        if (len >= 0) {
            look_obtacles(buffer);
        }
        close(file);
        return 0;
    }
}

int bsq_create(int argc, char **argv)
{
    int length = 0; int i = 0; char aux; int enc = 0; int enc2 = 0;
    aux = argv[argc - 2][0];
    while (aux < 58 && aux > 47 && argv[argc - 2][i] != '\0') {
        if (aux > 57 || aux < 48) {
            enc = 1;
        }
        i++; aux = argv[argc - 2][i];
    }
    i = 0;
    while (argv[argc - 1][i] != '\0') {
        if (argv[argc - 1][i] != 'o' && argv[argc - 1][i] != '.') {
            enc2 = 1;
        }
        i++;
    }
    if (enc == 0 && enc2 == 0) {
        length = argv_long(argv[argc - 1]);
        create_table(argv[argc - 2], argv[argc - 1], length);
    }
    return 0;
}

int argv_long(char *buffer)
{
    int i = 0;
    while (buffer[i] != '\0') {
        i++;
    }
    return i; free(buffer);
}
