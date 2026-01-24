/*Escriba un programa que tome una cadena y muestre su última palabra seguida de un \n.

Una palabra es una sección de una cadena delimitada por espacios/tabuladores o por el inicio/fin de la cadena.

Si el número de parámetros no es 1 o no hay palabras, muestre una nueva línea.
$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int len = 0;
    if (argc == 2)
    {
        while(argv[1][len] != '\0') 
            len++;
        if(argv[1][len-1] == 32 || argv[1][len-1] == 9)
        {
            while(argv[1][len-1] == 32 || argv[1][len-1] == 9)
                len--;
        }
        if(argv[1][len-1] >=33 && argv[1][len-1] <= 126)
        {
            while(argv[1][len-1] >=33 && argv[1][len-1] <= 126)
            {
                len--;
            }
        }   
        while(argv[1][len] >=33 && argv[1][len] <= 126)
        {
            write(1, &argv[1][len],1);
            len++;
        }
    }

    write(1, "\n", 1);
    return(0);
}