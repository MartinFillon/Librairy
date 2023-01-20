/*
** EPITECH PROJECT, 2022
** library
** File description:
** library.h
*/

#ifndef LIBRARY_LIBRARY_H
    #define LIBRARY_LIBRARY_H

#include <stddef.h>

int my_strcmp(char *str1, char *str2);
char *my_strdup(const char *src);
int string_len(const char *);
int int_len(int);
char *my_strcat(char *dest, char *src);
void *my_mem_cpy(void *dest, void *src, size_t n);
void *my_realloc(void *ptr, size_t data_size, size_t new_length);

#endif //LIBRARY_LIBRARY_H
