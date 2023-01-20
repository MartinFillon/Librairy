/*
** EPITECH PROJECT, 2022
** library
** File description:
** strcat.c
*/

#include <stdio.h>
#include "../include/library.h"

char *my_strcat(char *dest, char *src)
{
    int len = string_len(dest);
    int max = string_len(src);
    dest = my_realloc(dest, len, max + len);
    printf("%s\n", dest);
    for (int i = 0; i < max; i++) {
        dest[i + len] = src[i];
    }
    dest[max + len] = '\0';
    return dest;
}
