/*
Escriba una función que invierta (in situ) una cadena.

Debe devolver su parámetro.

Su función debe declararse de la siguiente manera:
char *ft_strrev(char *str)
*/
char *ft_strrev(char *str)
{
    int len = 0;
    int i = -1;
    char aux;
    while(str[len]!='\0')
        len++;
    while(i < (len/2))
    {
        aux=str[i];
        str[i] = str[len-i-1];
        str[len-i-1] = aux;
        i++;
    }
    return(str);
}

#include <stdio.h>
int main(int argc, char **argv)
{
    printf("%s'\n'", ft_strrev(argv[1]));
    return(0);
}