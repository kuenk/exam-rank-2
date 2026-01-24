/*Escriba un programa que tome una o más cadenas y, para cada argumento, escriba el último carácter (una letra de cada palabra) en mayúsculas y el resto en minúsculas. Luego, muestre el resultado seguido de un \n.

Una palabra es una sección de una cadena delimitada por espacios/tabuladores o por el inicio/final de la cadena. Si una palabra tiene una sola letra, debe escribirse en mayúscula.

Una letra es un carácter del conjunto [a-zA-Z]

Si no hay parámetros, muestre \n.

Ejemplos:
$> ./rstr_capitalizer | cat -e
$
$> ./rstr_capitalizer "a FiRSt LiTTlE TESt" | cat -e
A firsT littlE tesT$
$> ./rstr_capitalizer "SecONd teST A LITtle BiT   Moar comPLEX" "   But... This iS not THAT COMPLEX" "     Okay, this is the last 1239809147801 but not    the least    t" | cat -e
seconD tesT A littlE biT   moaR compleX$
   but... thiS iS noT thaT compleX$
     okay, thiS iS thE lasT 1239809147801 buT noT    thE leasT    T$
$>
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int palabras = 1;
    int i;
    if (argc > 1)
    {
        while(palabras < argc)
        {
            i = 0;
            while(argv[palabras][i] != '\0')
            {
                if(argv[palabras][i] >= 'A' && argv[palabras][i] <= 'Z')
                    argv[palabras][i] = argv[palabras][i] + 32;
                if((argv[palabras][i] >= 'a' && argv[palabras][i] <= 'z') && (argv[palabras][i+1] == 32 || argv[palabras][i + 1] == '\t' || argv[palabras][i + 1] == '\0'))
                {
                    argv[palabras][i]=argv[palabras][i] - 32;
                    write(1, &argv[palabras][i], 1);
                }
                else
                    write(1, &argv[palabras][i],1);
                i++;
            }
            palabras +=1;
        }
    }
    write(1, "\n", 1);
    return (0);
}