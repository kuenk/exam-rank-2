/*Escriba un programa llamado buscar_y_reemplazar que acepte 3 argumentos. El primero es una cadena en la que se reemplaza una letra (segundo argumento) por otra (tercer argumento).

Si el número de argumentos no es 3, simplemente se muestra una nueva línea.

Si el segundo argumento no está incluido en el primero (la cadena), el programa simplemente reescribe la cadena seguida de una nueva línea.
Examples:
$>./search_and_replace "Papache est un sabre" "a" "o"
Popoche est un sobre
$>./search_and_replace "zaz" "art" "zul" | cat -e
$
$>./search_and_replace "zaz" "r" "u" | cat -e
zaz$
$>./search_and_replace "jacob" "a" "b" "c" "e" | cat -e
$
$>./search_and_replace "ZoZ eT Dovid oiME le METol." "o" "a" | cat -e
ZaZ eT David aiME le METal.$
$>./search_and_replace "wNcOre Un ExEmPle Pas Facilw a Ecrirw " "w" "e" | cat -e
eNcOre Un ExEmPle Pas Facile a Ecrire $
*/
#include <unistd.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int i = 0;
    int c = 0;

    if (argc != 4)
    {
        write(1, "\n", 1);
        exit(0);
    }
    i=0;
    while (argv[2][i++] != '\0')
        c++;

    i=0;
    while (argv[3][i++] != '\0')
        c++;
    if (c != 2)
    {   
        write(1, "\n", 1);
        exit(0);
    }

    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == argv[2][0])
        {
            argv[1][i] = argv[3][0];
        }
        i++;
    }
    i=0;
    while (argv[1][i] != '\0')
    {
        write(1, &argv[1][i],1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}