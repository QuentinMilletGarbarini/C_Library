/*
** EPITECH PROJECT, 2020
** my_isneg
** File description:
** 
*/

#include <stdio.h>

void my_putchar(char c){
    write(1, &c, 1);
}

int my_isneg(int nb)
{
    if( nb < 0){
        my_putchar('N');
    }
    else if(nb >= 0){
        my_putchar('P');
    }
    return (nb);
}
