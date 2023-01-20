/*
** EPITECH PROJECT, 2022
** library
** File description:
** len.c
*/

#include "../include/library.h"


int string_len(const char *string)
{
    int i = -1;
    while (string[++i] != '\0') {}
    return i;
}

int int_len(int number)
{
    int i = 0;
    if (number < 0)
        number *= -1;
    while (number > 0) {
        number /= 10;
        i++;
    }
    return i;
}
