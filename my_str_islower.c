/*
** EPITECH PROJECT, 2020
** my_str_islower
** File description:
** 
*/

#include <stdio.h>

int my_str_islower(char const *str)
{
    int c = 0;

    while(str[c] != '\0')
    {
        if(str[c] >= 97 && str[c] <= 122)
        {
            c = c + 1;
        }
        
        else
        {
            return(0);
        }
    }
    printf("ALL IS FINE");
}
