/*
Escriba un programa que tome dos cadenas que representen dos enteros estrictamente positivos que quepan en un entero.

Muestra su máximo común denominador seguido de un salto de línea (siempre es un entero estrictamente positivo).

Si el número de parámetros no es 2, muestra un salto de línea.

Ejemplos:

$> ./pgcd 42 10 | cat -e
2$
$> ./pgcd 42 12 | cat -e
6$
$> ./pgcd 14 77 | cat -e
7$
$> ./pgcd 17 3 | cat -e
1$
$> ./pgcd | cat -e
$
*/
#include <unistd.h>
int ft_atoi(char *str)
{
    int n = 0;
    while(*str)
    {
        n = n * 10 + (*str - '0');
        str++;
    }
    return n;
}

void ft_putnbr(int n)
{
    char c;
    if (n >= 10)
        ft_putnbr(n/10);
    c = (n %10) + '0';
    write (1, &c, 1);
}
int main(int argc, char **argv)
{
    int a, b, tmp;
    if (argc == 3)
    {
        a = ft_atoi(argv[1]);
        b = ft_atoi(argv[2]);

        while (b != 0)
        {
            tmp = b;
            b = a % b;
            a = tmp;
        }

        ft_putnbr(a);

    }
    write(1, "\n", 1);
    return(0);
}