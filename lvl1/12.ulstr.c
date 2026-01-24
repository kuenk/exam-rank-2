/*Escriba un programa que tome una cadena e invierta el formato de todas sus letras.
Los demás caracteres permanecen inalterados.

Debe mostrar el resultado seguido de '\n'.

Si el número de argumentos no es 1, el programa muestra '\n'.
$>./ulstr "L'eSPrit nE peUt plUs pRogResSer s'Il staGne et sI peRsIsTent VAnIte et auto-justification." | cat -e
l'EspRIT Ne PEuT PLuS PrOGrESsER S'iL STAgNE ET Si PErSiStENT vaNiTE ET AUTO-JUSTIFICATION.$
$>./ulstr "S'enTOuRer dE sECreT eSt uN sIGnE De mAnQuE De coNNaiSSanCe.  " | cat -e
s'ENtoUrER De SecREt EsT Un SigNe dE MaNqUe dE COnnAIssANcE.  $
$>./ulstr "3:21 Ba  tOut  moUn ki Ka di KE m'en Ka fe fot" | cat -e
3:21 bA  ToUT  MOuN KI kA DI ke M'EN kA FE FOT$
$>./ulstr | cat -e
$
*/

#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    char aux;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                aux = argv[1][i] - 32;
                write(1, &aux, 1);
            }
            else if(argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                aux = argv[1][i] + 32;
                write(1, &aux, 1);
            }
            else
                write(1, &argv[1][i],1);
            i++;
        }       
    }
    write(1, "\n", 1);
    return(0);
}