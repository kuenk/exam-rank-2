/*Escriba un programa que tome dos cadenas y muestre, sin dobles, los caracteres que aparecen en ambas cadenas, en el orden en que aparecen en la primera.

La visualización irá seguida de un \n.

Si el número de argumentos no es 2, el programa muestra \n.
Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char c;
    
    if (argc == 3)
    {
        while(argv[1][i] != '\0')
        {
            c = argv[1][i];
            k = 0;
            while (k < i)
                {
                    if (argv[1][k] == c)
                        break;
                    k++;
                }
            if (k != i)
                i++;

            j = 0;
            while(argv[2][j] != '\0')
            {
                    if (argv[2][j] == c)
                    {
                        write(1, &c, 1);
                        break;
                    }
                    j++;
            }
            i++
        }
    }
    write(1, "\n", 1);
    return(0);
}
