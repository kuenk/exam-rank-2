/*Escriba un programa que tome una cadena y la muestre, reemplazando cada una de sus letras por la siguiente en orden alfabético.

La 'z' se convierte en 'a' y la 'Z' en 'A'. No se modifica el uso de mayúsculas y minúsculas.

La salida irá seguida de un \n.

Si el número de argumentos no es 1, el programa muestra \n.
Example:

$>./rotone "abc"
bcd
$>./rotone "Les stagiaires du staff ne sentent pas toujours tres bon." | cat -e
Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
BlkiA aMLJKa , 23z $
$>./rotone | cat -e
$
$>
$>./rotone "" | cat -e
$
$>
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    char c;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            c = argv[1][i];
            if (c >= 'a' && c <= 'z')
                c = ((c - 'a' + 1) % 26) + 'a';
            else if (c >= 'A' && c <= 'Z')
                c = ((c - 'A' + 1) % 26) + 'A';
            write(1, &c, 1);
            i++;
        }
    }
     write(1, "\n", 1);
    return(0);
}