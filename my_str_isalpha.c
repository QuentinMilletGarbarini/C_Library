/*
** EPITECH PROJECT, 2020
** my_str_isaplha
** File description:
** 
*/

#include <stdio.h>

int my_str_isalpha(char const *str)
{
    int c = 0;
    
    while(str[c] != '\0')
    {
        if(str[c] >= 65 && str[c] <= 90)
        {
            c = c + 1;
        }

        else if(str[c] >= 97 && str[c] <= 122)
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
