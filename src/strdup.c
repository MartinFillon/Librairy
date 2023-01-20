/*
** EPITECH PROJECT, 2022
** library
** File description:
** strdup.c
*/

#include "../include/library.h"
#include <stdlib.h>

char *my_strdup(const char *src)
{
    int len = string_len(src);
    char *dest = malloc((len + 1) * sizeof (char ));
    for (int i = 0; i < len; i++)
        dest[i] = src[i];
    dest[len + 1] = '\0';
    return dest;
}
