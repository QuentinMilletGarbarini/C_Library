/*
** EPITECH PROJECT, 2020
** my_getnbr
** File description:
** 
*/

#include <stdio.h>

int my_char_is_numb(char i)
{
    if( i >= 48 && i <= 57)
    {
        return(1);
    }
    return (0);
}

int my_putchar(char c)
{
    write(1, &c, 1);
    return(0);
}

int my_getnbr(char const *str)
{
    int i = 0;

    int res =0;

    while(str[i] != '\0' && my_char_is_numb(str[i]) !=  1)
        i = i + 1;
        
    while(str[i] != '\0' && my_char_is_numb(str[i]) == 1)
    {
        my_putchar(str[i]);
        i = i + 1;
    }
    return (0);
}

int main(void)
{
    my_getnbr("jlwhsvbhizbx-54156LMÙJOUBSFHIOBSD87");
    return(0);
}
