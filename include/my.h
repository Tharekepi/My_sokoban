/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#include <fcntl.h>
#include <ncurses.h>
#include <string.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <stdlib.h>

#ifndef MY_H
    #define MY_H
    typedef struct my_struct_s {
        int c,a,cote,hauteur,compte;
    }my_struct_t;

    int cond_f(char *map2, int a, int k, int j);
    int cond_compt(char *map, int i, int a ,int o);
    char *my_strcpy(char *dest, char const *src);
    char *map_start(char *map, int ac, char **av);
    int compte_p(char *map);
    char *move_up(int p, char *map, int ch);
    char *move_ri(int p, char *map, int ch);
    char *move_le(int p, char *map, int ch);
    char *move_do(int p, char *map, int ch);
    char *restart(int ch, char *stack, char *map);
    int *compt0(char *map);
    char *search0(char *stack, char *map);
    char *pos0(int *coord, char *map);

#endif
