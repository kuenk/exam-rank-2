/*
Escriba un programa que tome un entero positivo y muestre sus factores primos en la salida estándar, seguidos de un salto de línea.

Los factores deben mostrarse en orden ascendente y separados por '*' para que la expresión en la salida proporcione el resultado correcto.

Si el número de parámetros no es 1, simplemente muestre un salto de línea.

La entrada, si la hay, será válida.

Examples:

$> ./fprime 225225 | cat -e
3*3*5*5*7*11*13$
$> ./fprime 8333325 | cat -e
3*3*5*5*7*11*13*37$
$> ./fprime 9539 | cat -e
9539$
$> ./fprime 804577 | cat -e
804577$
$> ./fprime 42 | cat -e
2*3*7$
$> ./fprime 1 | cat -e
1$
$> ./fprime | cat -e
$
$> ./fprime 42 21 | cat -e
$
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int i;
    int num;
    if (argc == 2)
    {
        i = 1;
        num = atoi(argv[1]);
        if(num == 1)
            printf("1");
        while(num >= ++i)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                if (num == i);
                    break;
                printf("*");
                num/=i;
                i = 1;
            }
        }
    }
    printf("\n");
    return(0);
}
