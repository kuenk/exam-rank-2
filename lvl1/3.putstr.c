/*Escriba una función que muestre una cadena en la salida estándar.

El puntero pasado a la función contiene la dirección del primer carácter de la cadena.

La función debe declararse de la siguiente manera:
void	ft_putstr(char *str);
*/
#include <unistd.h>

void ft_putstr(char *str)
{
    while(*str != '0')
    {
        write(1, str, 1);
        str++;
    }
}

int main(void)
{
    ft_putstr("hola");
    return(0);
}