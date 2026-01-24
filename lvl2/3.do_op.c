/*Escriba un programa que acepte tres cadenas:
- La primera y la tercera son representaciones de enteros con signo de base 10 que caben en un entero.
- La segunda es un operador aritmético entre: + - * / %

El programa debe mostrar el resultado de la operación aritmética solicitada, seguido de un salto de línea. Si el número de parámetros no es 3, el programa simplemente muestra un salto de línea.

Se puede asumir que la cadena no contiene errores ni caracteres extraños. Los números negativos, tanto en la entrada como en la salida, tendrán un solo "-" inicial. El resultado de la operación cabe en un entero.
$> ./do_op "123" "*" 456 | cat -e
56088$
$> ./do_op "9828" "/" 234 | cat -e
42$
$> ./do_op "1" "+" "-43" | cat -e
-42$
$> ./do_op | cat -e
$
*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    if (argc == 4)
    {
        if (argv[2][0] == '+')
            printf("%d", atoi(argv[1]) + atoi(argv[3]));
        else if (argv[2][0] == '-')
            printf("%d", atoi(argv[1]) - atoi(argv[3]));
        else if (argv[2][0] == '*')
            printf("%d", atoi(argv[1]) * atoi(argv[3]));
        else if (argv[2][0] == '/')
            printf("%d", atoi(argv[1]) / atoi(argv[3]));
        else if (argv[2][0] == '%')
            printf("%d", atoi(argv[1]) % atoi(argv[3]));
    }
    printf("\n");
    return(0);
}
