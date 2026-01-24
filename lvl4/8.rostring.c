/*
Escriba un programa que tome una cadena y la muestre después de rotarla una palabra a la izquierda.

De esta manera, la primera palabra se convierte en la última y las demás permanecen en el mismo orden.

Una "palabra" se define como una parte de una cadena delimitada por espacios o tabulaciones, o por el inicio y el final de la cadena.

Las palabras se separarán solo por un espacio en la salida.

Si hay menos de un argumento, el programa muestra \n.

Ejemplo:
$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$>
*/
#include <unistd.h>

int main(int argc, char **argv)
{
    char *str = argv[1];
    int i = 0;
    if(argc > 1)
    {
        while(str[i] == ' ' || str[i] == '\t')
        {
            i++;
        }

        int s_first = i;
        while(str[i] && str[i] != ' ' && str[i] != '\t')
            i++;
        int end_first = i;

        while(str[i])
        {
            while(str[i] == ' ' || str[i] == '\t')
                i++;
            if(!str[i])
                break;
            int start = i;
            while(str[i] && str[i] != ' ' && str[i] != '\t')
                i++;
            int end = i;
            write(1,&str[start], end-start);
            write(1," ", 1);
        }
        write(1, &str[s_first], end_first - s_first);
    }

    write(1, "\n",1);
    return(0);
}