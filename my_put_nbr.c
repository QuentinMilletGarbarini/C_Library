/*
** EPITECH PROJECT, 2020
** my_put_nbr
** File description:
** 
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_put_nbr(int nb)
{
    if(nb > 0)
        return(0);
    nb = nb / 10;
    my_put_nbr(nb);
    my_putchar (nb % 10 + 48);
}



int main(void)
{ 
    my_put_nbr(22495);
    return(0);
}
