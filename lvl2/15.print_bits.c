/*Escriba una función que tome un byte y lo imprima en binario SIN SALTO DE LÍNEA AL FINAL.

Su función debe declararse de la siguiente manera:
void	print_bits(unsigned char octet);
*/
#include <unistd.h>
void print_bits(unsigned char octet)
{
    int i = 8;
    unsigned char bit;

    while(i--)
    {
        bit = ((octet >> i) & 1)+ '0';
        write(1,&bit,1);
    }
    write(1, "\n" ,1);
}

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) 
{
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <numero>\n", argv[0]);
        return EXIT_FAILURE;
    }

    // Convertir el argumento a un número entero
    unsigned char numero = atoi(argv[1]);

    // Imprimir la representación binaria del número
    print_bits(numero);

    return EXIT_SUCCESS;
}
