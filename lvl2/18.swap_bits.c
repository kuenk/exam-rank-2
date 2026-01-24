/*Escriba una función que tome un byte, intercambie sus mitades (como en el ejemplo) y devuelva el resultado.

Su función debe declararse de la siguiente manera:
unsigned char swap_bits(unsigned char octet)
*/
unsigned char swap_bits(unsigned char octet)
{
    return(((octet >> 4) | (octet <<4)));
}