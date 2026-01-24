/*Escriba un programa que tome una cadena y la muestre con solo un espacio entre palabras, sin espacios ni tabulaciones ni al principio ni al final, seguido de un \n.

Una "palabra" se define como una parte de una cadena delimitada por espacios/tabulaciones o por el inicio/fin de la cadena.

Si el número de argumentos no es 1, o si no hay palabras para mostrar, el programa muestra un \n.
Example:

$> ./epur_str "See? It's easy to print the same thing" | cat -e
See? It's easy to print the same thing$
$> ./epur_str " this        time it      will     be    more complex  . " | cat -e
this time it will be more complex .$
$> ./epur_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./epur_str "" | cat -e
$
$>
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int flag = 0;
    if(argc == 2)
    {
        while(argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] == ' ' || argv[1][i] == '\t')
                flag = 1;
            if(!(argv[1][i] == ' ' || argv[1][i] == '\t'))
            {
                if (flag == 1)
                    write(1, " ",1);
                flag = 0;
                write(1, &argv[1][i],1);
            }
            i++;
        }
    }
    write(1, "\n",1);
    return(0);
}