/*
** EPITECH PROJECT, 2020
** my_strcpy
** File description:
** 
*/

#include <stdio.h>

char my_strcpy(char *dest, char const *src)
{
    int S = 0;
    
    while(src[S] != '\0')
    {
        dest[S] = src[S];
        S = S + 1;
    }
    dest[S] = '\0';
    return(0);
    
}

int main(void)
{
    char dest[] = "dest";
    char src[] = "sour";
    my_strcpy(dest, src);
    printf(dest);
}
