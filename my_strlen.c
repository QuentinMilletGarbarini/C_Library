/*
** EPITECH PROJECT, 2020
** my_strlen
** File description:
** 
*/

int my_strlen(char const *str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i = i + 1;
        return(i);
    }
    return(0);
}


int main(void)
{
    my_strlen("les patates sont cuites");
}
