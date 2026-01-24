/*Escriba un programa que muestre la tabla de multiplicar de un número.

El parámetro siempre será un número estrictamente positivo que quepa en un entero, y dicho número multiplicado por 9 también cabe en un entero.

Si no hay parámetros, el programa muestra \n.
Examples:

$>./tab_mult 9
1 x 9 = 9
2 x 9 = 18
3 x 9 = 27
4 x 9 = 36
5 x 9 = 45
6 x 9 = 54
7 x 9 = 63
8 x 9 = 72
9 x 9 = 81
$>./tab_mult 19
1 x 19 = 19
2 x 19 = 38
3 x 19 = 57
4 x 19 = 76
5 x 19 = 95
6 x 19 = 114
7 x 19 = 133
8 x 19 = 152
9 x 19 = 171
$>
$>./tab_mult | cat -e
$
$>
*/
#include <unistd.h>
#include <stdio.h>
void putnbr(int n)
{
    char c;
    if(n >=10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int result = 0;
    while(*str)
    {
        result = (result * 10) + *str - '0';
        str++;
    }
    return(result);
}

int main(int argc, char **argv)
{
    int m = 1;
    int num;
    if (argc == 2 )
    {
        num = ft_atoi(argv[1]);
        while(m <= 9)
        {   
            putnbr(m);
            write(1, " x ", 3);
            putnbr(num);
            write(1, " = ", 3);
            putnbr(m * num);
            write(1,"\n", 1);
            m++;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}