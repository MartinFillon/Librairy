/*
** EPITECH PROJECT, 2022
** library
** File description:
** strcpy.c
*/

#include "../include/library.h"

int my_strcmp(char *str1, char *str2)
{
    int len1 = string_len(str1);
    int len2 = string_len(str2);
    int len = (len1 < len2) ? len1: len2;
    for (int i = 0; i < len; i++) {
        if (str1[i] < str2[i])
            return -1;
        if (str1[i] > str2[i])
            return 1;
    }
    return 0;
}
