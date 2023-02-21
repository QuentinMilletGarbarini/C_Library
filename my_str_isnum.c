/*
** EPITECH PROJECT, 2020
** my_str_isnum
** File description:
** 
*/

#include <stdio.h>

int my_str_isnum(char const *str)
{
    int c = 0;

    while(str[c] != '\0')
    {
        if( str[c] >= 48 && str[c] <= 57)
        {
            c = c + 1;            
        }

        else
        {
            return(1);
        }
    }
    return(0);
}
