
/*
Escriba un programa que tome un número positivo (o cero) expresado en base 10 y lo muestre en base 16 (en minúsculas), seguido de un salto de línea.

Si el número de parámetros no es 1, el programa muestra un salto de línea.

Ejemplos:

$> ./print_hex "10" | cat -e
a$
$> ./print_hex "255" | cat -e
ff$
$> ./print_hex "5156454" | cat -e
4eae66$
$> ./print_hex | cat -e
$
*/
#include <unistd.h>
int ft_atoi(char *str)
{
    int n = 0;

    while (*str != '\0')
    {
        n = n * 10;
        n = n+ *str - '0';
        ++str;
    }
    return(0);
}

void print(int n)
{
    char hex[] = "0123456789abcdef";

    if (n >= 16)
        print(n /16);
    write(1, &hex[n % 16], 1);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        print(ft_atoi(argv[1]));
    }
    write(1, "\n", 1);
    return(0);
}



