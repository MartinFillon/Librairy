/*
** EPITECH PROJECT, 2022
** library
** File description:
** test.c
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../include/library.h"

Test(strlen, return_val1)
{
    cr_assert_eq(string_len("Bonjour"), 7);
}

Test(strlen, return_val2)
{
cr_assert_eq(string_len("Test"), 4);
}

Test(strlen, return_val3)
{
cr_assert_eq(string_len(""), 0);
}

Test(strlen, return_val4)
{
cr_assert_eq(string_len("Ho"), 2);
}

Test(strlen, return_val5)
{
cr_assert_eq(string_len("Jeanne"), 6);
}

Test(intlen, returnvalue1)
{
cr_assert_eq(int_len(1), 1);
}

Test(intlen, returnvalue2)
{
cr_assert_eq(int_len(6), 1);
}

Test(intlen, returnvalue3)
{
cr_assert_eq(int_len(-13), 2);
}

Test(intlen, returnvalue4)
{
cr_assert_eq(int_len(999999), 6);
}

Test(intlen, returnvalue5)
{
cr_assert_eq(int_len(500), 3);
}

Test(strcat, result1, .init=cr_redirect_stdout)
{
    char *str = my_strdup("aa\0");
    str = my_strcat(str, "hello\0");
    cr_assert_str_eq(str,"aahello");
}

Test(strcat, result2, .init=cr_redirect_stdout)
{
    char *str = my_strdup("khjkl\0");
    str = my_strcat(str, "dsd\0");
    cr_assert_str_eq(str,"khjkldsd");
}

Test(strcat, result3, .init=cr_redirect_stdout)
{
    char *str = my_strdup("Mainoll\0");
    str = my_strcat(str, "hello\0");
    cr_assert_str_eq(str,"Mainollhello");
}

Test(strcat, result4, .init=cr_redirect_stdout)
{
    char *str = my_strdup("Jeanne\0");
    str = my_strcat(str, "hello\0");
    cr_assert_str_eq(str,"Jeannehello");
}

Test(strcat, result5, .init=cr_redirect_stdout)
{
    char *str = my_strdup("YYYY\0");
    str = my_strcat(str, "hello\0");
    cr_assert_str_eq(str,"YYYYhello");
}

Test(memcpy, result1)
{
    char *str = my_strdup("Hello");
    char *dest = malloc(6 * sizeof (char));
    my_mem_cpy(dest, str, string_len(str) + 1);
    cr_assert_str_eq(dest, str);
}

Test(memcpy, result2)
{
    char *str = my_strdup("Hello");
    cr_assert_eq(my_mem_cpy(NULL, str, string_len(str) + 1), NULL);
}

Test(strcmp, result)
{
    cr_assert_eq(my_strcmp("hello", "hello"), 0);
}

Test(strcmp, result2)
{
    cr_assert_neq(my_strcmp("helo", "hello"), 0);
}

Test(strcmp, result3)
{
    cr_assert_neq(my_strcmp("hElo", "hello"), 0);
}