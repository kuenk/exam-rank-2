/*Escriba un programa que imprima los números del 1 al 100, separados por una nueva línea.

Si el número es múltiplo de 3, imprime "fizz".

Si el número es múltiplo de 5, imprime "buzz".

Si el número es múltiplo de 3 y de 5, imprime "fizzbuzz".*/
#include <unistd.h>

void putnbr(int n)
{
	char	aux[10] = "0123456789";

   	if (n > 9)
	{
		putnbr(n / 10);
	}
    write(1, &aux[n %10], 1);
}

int main(void)
{
    int i = 1;
    while(i <= 100)
    {
        if (i%15 == 0)
            write(1, "fizzbuzz", 8);
        else if (i%3 == 0)
            write(1, "fizz", 4);
        else if (i%5 == 0)
            write(1, "buzz", 4);
        else
        {
            putnbr(i);
        }
        i++;
        write(1, "\n", 1);
    }
    return(0);
}