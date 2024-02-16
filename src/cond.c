/*
** EPITECH PROJECT, 2022
** MySokoban
** File description:
** cond.c
*/

#include "../include/my.h"

int cond_compt(char *map, int i, int a ,int o)
{
    if (map[i + o] == '\n' && i > a) {
        o = o + i;
        a = i;
        i = 0;
    } else if (map[i + o] == '\n') {
        o = o + i;
        i = 0;
        }
}

int cond_f(char *map2, int a, int k, int j)
{
    for (; k < a ; k++, j++) {
        map2[j] = ' ';
        }
}
