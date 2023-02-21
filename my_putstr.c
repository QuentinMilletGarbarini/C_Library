/*
** EPITECH PROJECT, 2020
** my_putstr
** File description:
** 
*/

#include <stdio.h>

void my_putchar (char c)
{
    write (1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int locat = 0; str[locat] != '\0'; locat++ )
    {
        my_putchar(str[locat]);
    }
    return (0);
}
