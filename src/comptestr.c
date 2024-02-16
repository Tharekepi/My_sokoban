/*
** EPITECH PROJECT, 2019
** test
** File description:
** test
*/

#include "../include/my.h"

int comptestr(char *map)
{
    int a = 0,o = 0,i = 0;
    for (; map[i + o] != '\0'; i++) {
        cond_compt(map,i,a,o);
    }
    return (a);
}
