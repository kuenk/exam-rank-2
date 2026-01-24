/*Escriba un programa que tome una sola cadena en formato snake_case y la convierta en una cadena en formato lowerCamelCase.

Una cadena snake_case es una cadena donde cada palabra está en minúscula, separada por un guion bajo "_".

Una cadena lowerCamelCase es una cadena donde cada palabra comienza con mayúscula, excepto la primera.
Examples:
$>./camel_to_snake "here_is_a_snake_case_word"
hereIsASnakeCaseWord
$>./camel_to_snake "hello_world" | cat -e
helloWorld$
$>./camel_to_snake | cat -e
$
*/
#include <unistd.h>
int main(int argc, char **argv)
{
    int i=0;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            if(argv[1][i] != '_')
                write(1, &argv[1][i],1);
            i++;
        }
    }

}