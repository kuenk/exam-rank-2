/*Escriba un programa que tome una cadena y la muestre, reemplazando cada una de sus letras por la letra 13 espacios más adelante en orden alfabético.

La 'z' se convierte en 'm' y la 'Z' en 'M'. No se modifica el uso de mayúsculas y minúsculas.

La salida irá seguida de un salto de línea.

Si el número de argumentos no es 1, el programa muestra un salto de línea.
Example:

$>./rot_13 "abc"
nop
$>./rot_13 "My horse is Amazing." | cat -e
Zl ubefr vf Nznmvat.$
$>./rot_13 "AkjhZ zLKIJz , 23y " | cat -e
NxwuM mYXVWm , 23l $
$>./rot_13 | cat -e
$
$>
$>./rot_13 "" | cat -e
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
                c = ((c - 'a' + 13) % 26) + 'a';
            else if (c >= 'A' && c <= 'Z')
                c = ((c - 'A' + 13) % 26) + 'A';
            write(1, &c, 1);
            i++;
        }
    }
     write(1, "\n", 1);
    return(0);
}

int main(int argc, char **argv)
{
    int i = 0;
    char aux;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            aux = argv[1][i];
            if (aux >= 'a' && aux <= 'z')
            {
                if (aux <= 'm')
                    aux += 13;
                else
                    aux -= 13;
            }
            else if (aux >= 'A' && aux <= 'Z')
            {
                if (aux <= 'M')
                    aux += 13;
                else
                    aux -= 13;
            }
            write(1, &aux, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}



