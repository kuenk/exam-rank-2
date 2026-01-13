#include <stdlib.h>
#include <stdio.h>

char    *ft_itoa(int nbr)
{
    if (nbr == -2147483647)
        return ("-2147483647\0");

    int n = nbr;
    int len = 0;
    
    if (nbr <= 0)
        len++;
    while (n)
    {
        n /= 10;
        len++;
    }
    char *str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return NULL;
    str[len] = '\0';
    if(nbr == 0)
    {
        str[0] = '0';
        return(str);
    }
    if(nbr < 0)
    {
        str[0] = '-';
        nbr = -nbr;
    }
    while(nbr)
    {
        str[--len] = nbr % 10 + '0';
        nbr /= 10;
    }
    return str;
}