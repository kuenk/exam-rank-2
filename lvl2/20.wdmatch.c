/*Escriba un programa que tome dos cadenas y compruebe si es posible escribir la primera cadena con caracteres de la segunda, respetando el orden en que aparecen estos caracteres en la segunda.

Si es posible, el programa muestra la cadena seguida de un \n; de lo contrario, simplemente muestra un \n.

Si el número de argumentos no es 2, el programa muestra un \n.
Examples:

$>./wdmatch "faya" "fgvvfdxcacpolhyghbreda" | cat -e
faya$
$>./wdmatch "faya" "fgvvfdxcacpolhyghbred" | cat -e
$
$>./wdmatch "forty two" "qfqfsoudf arzgrsayns tsryegftdgs sjytwdekuooixq " | cat -e
forty two$
$>./wdmatch "error" rrerrrfiiljdfxjyuifrrvcoojh | cat -e
$
$>./wdmatch | cat -e
$
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int len = 0;
    int count = 0;

    if (argc == 3)
    {
        while(argv[1][len] != '\0')
            len++;
            
        while (argv[2][j] != '\0')
        {
            if (argv[1][i] == argv[2][j])
            {
                i++;
                count++;
            }
            j++;
        }
        if (len == count)
        {
            i = 0;
            while(i < count)
            {
                write(1, &argv[1][i],1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return(0);
}