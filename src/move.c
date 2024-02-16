/*
** EPITECH PROJECT, 2019
** move
** File description:
** move
*/

#include "../include/my.h"

char *move_up(int p, char *map, int ch)
{
    int o = 0;
    for (; map[o] != '\n';)
        o++;
    o++;
    if (ch != KEY_UP)
        return (map);
    switch (map[p- o]){
        case ('#') : case ('\n') : case ('\0') :
        return (map); break;
    } if (map[p - o] == 'X') {
        switch (map[p - o - o ]) {
        case ('X') :
            return (map); break;
        case ('#') :
            return (map); break;
        }
        map[p - o - o] = 'X';
    }
    map[p - o] = 'P';
    map[p] = ' '; return (map);
}

char *move_ri(int p, char *map, int ch)
{
    if (ch != KEY_RIGHT)
        return (map);
    switch (map[p + 1]){
        case ('#') : case ('\n') : case ('\0') :
        return (map); break;
    } if (map[p + 1] == 'X') {
        switch (map[p + 2]) {
        case ('X') :
            return (map); break;
        case ('#') :
            return (map); break;
        }
        map[p + 2] = 'X';
    }
    map[p + 1] = 'P';
    map[p] = ' ';
    return (map);
}

char *move_le(int p, char *map, int ch)
{
    if (ch != KEY_LEFT)
        return (map);
    switch (map[p - 1]){
        case ('#') : case ('\n') : case ('\0') :
        return (map); break;
    } if (map[p - 1] == 'X') {
        switch (map[p - 2]) {
        case ('X') :
            return (map); break;
        case ('#') :
            return (map); break;
        }
        map[p - 2] = 'X';
    }
    map[p - 1] = 'P';
    map[p] = ' ';
    return (map);
}

char *move_do(int p, char *map, int ch)
{
    int o = 0;
    for (; map[o] != '\n';)
        o++;
    o++;
    if (ch != KEY_DOWN)
        return (map);
    switch (map[p + o]){
        case ('#') : case ('\n') : case ('\0') :
        return (map); break;
    } if (map[p + o] == 'X') {
        switch (map[p + o + o ]) {
        case ('X') :
            return (map); break;
        case ('#') :
            return (map); break;
        }
        map[p + o + o] = 'X';
    }
    map[p + o] = 'P';
    map[p] = ' '; return (map);
}
