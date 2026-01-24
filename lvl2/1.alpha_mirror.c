/*Escriba un programa llamado alpha_mirror que tome una cadena y la muestre después de reemplazar cada carácter alfabético por el carácter alfabético opuesto, seguido de un salto de línea.

"a" se convierte en "z", "Z" en "A", "d" en "w", "M" en "N", y así sucesivamente.

No se cambia el uso de mayúsculas y minúsculas.

Si el número de argumentos no es 1, se muestra solo un salto de línea.
$>./alpha_mirror "abc"
zyx
$>./alpha_mirror "My horse is Amazing." | cat -e
Nb slihv rh Znzarmt.$
$>./alpha_mirror | cat -e
$
$>
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
                argv[1][i] = ('a' + ('z' - argv[1][i]));
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                argv[1][i] = ('A' + ('Z' - argv[1][i]));
            i++;
        }
    }
    i = 0;
    while(argv[1][i] != '\0')
    {
        write(1, &argv[1][i],1);
        i++;
    }

    write(1, "\n", 1);
    return(0);
}