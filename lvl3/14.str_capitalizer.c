/*
Escriba un programa que tome una o varias cadenas y, para cada argumento, escriba en mayúscula el primer carácter de cada palabra (si es una letra, obviamente), ponga el resto en minúscula y muestre el resultado en la salida estándar, seguido de \n.

Una "palabra" se define como una parte de una cadena delimitada por espacios o tabulaciones, o por el inicio y el final de la cadena. Si una palabra solo tiene una letra, debe escribirse en mayúscula.

Si no hay argumentos, el programa debe mostrar \n.

Ejemplo:
$> ./str_capitalizer | cat -e
$
$> ./str_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A First Little Test$
$> ./str_capitalizer "__SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
__second Test A Little Bit   Moar Complex$
   But... This Is Not That Complex$
     Okay, This Is The Last 1239809147801 But Not    The Least    T$
$>
*/
#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int words = 1;
    int i;
    char l;
    if (argc > 1)
    {
        while(words < argc)
        {
            i = 0;
            while(argv[words][i] != '\0')
            {
                if (argv[words][i] >= 'A' && argv[words][i] <= 'Z')
                    argv[words][i] = argv[words][i] + 32; 
                if((i == 0)&& (argv[words][i] >= 'a' && argv[words][i] <= 'z'))
                {
                    l = argv[words][i] - 32;
                    write(1, &l, 1);
                }
                else if((argv[words][i] >= 'a' && argv[words][i] <= 'z') && (argv[words][i-1] == ' ' || argv[words][i-1] == '\t'))
                {
                    l = argv[words][i] - 32;
                    write(1, &l, 1);
                }
                else
                {
                    l = argv[words][i];
                    write(1, &l, 1);
                }    
                i++;        
            }

            write(1, "\n", 1);
            words+=1;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}