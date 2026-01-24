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

int iter(char *str, char c, int len)
{
    int i = 0;
    while(str[i] && (i< len || len == -1))
    {
        if (str[i++] == c)
            return(1);
    }
    return(0);
}

int main(int argc, char **argv)
{
    int i = 0;
    if (argc == 3)
    {
        while(argv[1][i] != '\0')
        {
            if(!iter(argv[1], argv[1][i], i) && iter(argv[2], argv[1][i], -1))
                write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}