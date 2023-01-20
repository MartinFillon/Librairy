/*
** EPITECH PROJECT, 2022
** library
** File description:
** realloc.c
*/

#include "../include/library.h"
#include <stddef.h>
#include <stdlib.h>

void *my_realloc(void *ptr, size_t data_size, size_t new_length)
{
    void *new = malloc(new_length);
    new = my_mem_cpy(new, ptr, data_size);
    if (new || new_length == 0)
        free(ptr);
    return new;
}

void *my_mem_cpy(void *dest, void *src, size_t n) {
    if (dest == NULL)
        return NULL;
    char *char_dest = (char *) dest;
    char *char_src = (char *) src;
    for (size_t i = 0; i < n; i++) {
        char_dest[i] = char_src[i];
    }
    return char_dest;
}
