/*Escribe un programa llamado repeat_alpha que toma una cadena y la muestra, repitiendo cada carácter alfabético tantas veces como su índice, seguido de un salto de línea.

"a" se convierte en "a", "b" en "bb", "e" en "eeeee", etc.

Se mantiene la distinción entre mayúsculas y minúsculas.

Si el número de argumentos no es 1, simplemente se muestra un salto de línea.
Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int r;
    char c;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            c = argv[1][i];
            if(c >= 'A' && c <='Z'
                r = c - 'A' + 1;
            else
                r = c - 'a' +1;
            while(r > 0)
                {
                    write(1, &c, 1);
                    r--;
                }
            i++;
            }
    }
    write(1,"\n", 1);
    return(0);
}


./nombre.x abc

abbccc
