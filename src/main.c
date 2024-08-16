/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main
*/

#include "../include/my_bsq.h"

int main(int argc, char **argv)
{
    int r = 0;
    if (argc == 2) {
        bsq_file(argc, argv);
    } else if (argc == 3) {
        bsq_create(argc, argv);
    } else {
        r = 84;
    }
    return r; free(argv);
}
