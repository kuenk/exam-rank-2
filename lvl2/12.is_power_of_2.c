/*Escribe una función que determine si un número dado es una potencia de 2.

Esta función devuelve 1 si el número dado es una potencia de 2; de lo contrario, devuelve 0.
int is_power_of_2(unsigned int n)
*/
int is_power_of_2(unsigned int n)
{
    while ((n%2) == 0)
        n /= 2;
    if (n==1)
        return(1);
    return(0);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    printf("%d'\n'", is_power_of_2(atoi(argv[1])));
    return(0);
}