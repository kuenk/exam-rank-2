#include <unistd.h>
/*Escriba un programa que tome dos cadenas y muestre, sin dobles, los caracteres que aparecen en cada una de ellas.

La visualización se realizará en el orden en que aparecen los caracteres en la línea de comandos e irá seguida de un \n.

Si el número de argumentos no es 2, el programa mostrará \n.
Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>
*/
int check (int c, char *str, int index)
{
    int i = 0;
    
    while (i < index)
    {
        if (str[i] == c)
            return(0);
        i++;
    }
    return (1);
}
int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    if (argc == 3)
    {
        while(argv[1][i] != '\0')
            i++;
        while(argv[2][j] != '\0')
        {
            argv[1][i] = argv[2][j];
            i++;
            j++;
        }
        i--;
        while(k <= i)
        {
            if (check(argv[1][k], argv[1], k)== 1)
                write(1, &argv[1][k], 1);
            k++;
        }
    }
    write(1, "\n", 1);
    return(0);
}