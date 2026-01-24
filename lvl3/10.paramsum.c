
/*
Escriba un programa que muestre el número de argumentos que se le pasan, seguido de un salto de línea.

Si no hay argumentos, simplemente muestre un 0 seguido de un salto de línea.

Ejemplo:

$>./paramsum 1 2 3 5 7 24
6
$>./paramsum 6 12 24 | cat -e
3$
$>./paramsum | cat -e
0$
$>
*/
#include <unistd.h>
void ft_putnbr(int n)
{
    char c;

    if (n >= 10)
        ft_putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int main(int argc, char **argv)
{
    ft_putnbr(argc - 1);
    write(1,"\0", 1);
    return(0);
}