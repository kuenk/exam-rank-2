/*
Escriba un programa que tome una cadena como parámetro e imprima sus palabras en orden inverso.

Una "palabra" es una parte de la cadena delimitada por espacios o tabulaciones, o el principio o el final de la cadena.

Si el número de parámetros es diferente de 1, el programa mostrará '\n'.

En los parámetros que se van a probar, no habrá espacios adicionales (es decir, no habrá espacios adicionales al principio ni al final de la cadena, y las palabras siempre estarán separadas por exactamente un espacio).

Ejemplos:
$> ./rev_wstr "You hate people! But I love gatherings. Isn't it ironic?" | cat -e
ironic? it Isn't gatherings. love I But people! hate You$
$>./rev_wstr "abcdefghijklm"
abcdefghijklm
$> ./rev_wstr "Wingardium Leviosa" | cat -e
Leviosa Wingardium$
$> ./rev_wstr | cat -e
$
$>
*/
#include <unistd.h>

int main(int argc, char **argv)
{
    int len = 0;
    char *str = argv[1];
    if(argc == 2)
    {
        while(argv[1][len])
            len++;
        
        int i = len -1;
        while(i >= 0)
        {
            int end = i;
            while(i >= 0 && (str[i] != ' ' && str[i] != '\t'))
                i--;
            int start = i +1;
            write(1, &str[start], end -start +1);
            if(i >0)
                write(1, " ", 1);
            i--;
        }        
    }
    write(1, "\n", 1);
    return(0);
}