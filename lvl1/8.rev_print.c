/*Escriba una función que tome una cadena y la muestre en orden inverso, seguida de un salto de línea.

La cadena original no debe modificarse.

Debe devolver la cadena pasada como parámetro.

Su función debe declararse de la siguiente manera:
char *rev_print(char *str);

Examples:

int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
}

Output :
$> ./a.out | cat -e
dlrow olleH$
$> ./a.out | cat -e
Reverse print$
$> ./a.out | cat -e
$
*/
#include <unistd.h>
char *rev_print(char *str)
{
    int i = 0;
    while(str[i] != '\0')
        i++;
    while(i > 0)
        {
            write(1, &str[i-1], 1);
            i--;
        }
    return(str);
}

int main(void)
{
  rev_print("Hello world");
  write (1, "\n", 1);
  rev_print("tnirp esreveR");
  write (1, "\n", 1);
  rev_print("");
  write (1, "\n", 1);
  return(0);
}