/*Escriba un programa que tome una sola cadena en formato lowerCamelCase
y la convierta en una cadena en formato snake_case.

Una cadena lowerCamelCase es una cadena donde cada palabra comienza con mayúscula,
excepto la primera.

Una cadena snake_case es una cadena donde cada palabra está en minúscula, separada por un guion bajo "_".
Examples:
$>./camel_to_snake "hereIsACamelCaseWord"
here_is_a_camel_case_word
$>./camel_to_snake "helloWorld" | cat -e
hello_world$
$>./camel_to_snake | cat -e
$
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    char c;
    if (argc == 2)
    {
        while (argv[1][i] != '\0')
        {
            c = argv[1][i];
            if (c >= 'A' && c <= 'Z')
            {
                if (i != 0)
                    write(1, "_", 1);
                c = c + 32;
            }
            write (1, &c, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}