/*
Escriba un programa llamado hidenp que tome dos cadenas y muestre 1 seguido de una nueva línea si la primera cadena está oculta en la segunda. De lo contrario, muestre 0 seguido de una nueva línea.

Sean s1 y s2 cadenas. Decimos que s1 está oculto en s2 si es posible encontrar cada carácter de s1 en s2, en el mismo orden en que aparecen en s1.
Además, la cadena vacía está oculta en cualquier cadena.

Si el número de parámetros no es 2, el programa muestra una nueva línea.

Ejemplos:

$>./hidenp "fgex.;" "tyf34gdgf;'ektufjhgdgex.;.;rtjynur6" | cat -e
1$
$>./hidenp "abc" "2altrb53c.sse" | gato -e
1$
$>./hidenp "abc" "btarc" | gato -e
0$
$>./hidenp | gato -e
$
$>
*/
#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    char res = '0';
    int i = 0;
    int j = 0;
    int flag = 0;
    int len= 0;
    if (argc == 3)
    {
        while(argv[2][j] != '\0')
        {
            if(argv[1][i] == argv[2][j])
            {
                flag++;
                i++;
            }
            j++;
        }

        while(argv[1][len] != '\0')
            len++;

        if ((flag == len) || argv[1][0] == '\0')
            res = '1';
        else
            res = '0';
    }
    
    write(1, &res, 1);
    write(1, "\n", 1);
    return(0);
}
