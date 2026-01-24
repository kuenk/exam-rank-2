/*
Escriba una función que tome dos enteros sin signo como parámetros y devuelva el MCM calculado de esos parámetros.

El MCM (Mínimo Común Múltiplo) de dos enteros distintos de cero es el menor entero positivo divisible por ambos.

Un MCM se puede calcular de dos maneras:

- Puede calcular todos los múltiplos de cada entero hasta obtener un múltiplo común distinto de 0.

- Puede usar el MCD (Máximo Común Divisor) de estos dos enteros y calcularlo de la siguiente manera:

MCM(x, y) = | x * y | / MCD(x, y)

| x * y | significa "Valor absoluto del producto de x por y".

Si al menos un entero es nulo, el MCM es igual a 0.

Su función debe tener un prototipo como el siguiente:

unsigned int lcm(unsigned int a, unsigned int b);
*/
int mcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    return(a / mcd(a, b) * b);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    printf("%d\n", mcd(atoi(argv[1]),atoi(argv[2])));
    return(0);
}