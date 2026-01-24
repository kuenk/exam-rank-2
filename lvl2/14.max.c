/*Escriba la siguiente función:

int max(int* tab, unsigned int len);

El primer parámetro es un array de int, el segundo es el número de elementos del array.

La función devuelve el número más grande del array.

Si el array está vacío, la función devuelve 0.
*/
int max(int* tab, unsigned int len)
{
    unsigned int result = 0;
    unsigned int i= 0;

    while(i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return(result);
}

#include <stdio.h>
int main(void)
{
    int n[]= {3, 6, 1, 13, 2};

    printf("%d'\n", max(n, 1));
    return(0);
}