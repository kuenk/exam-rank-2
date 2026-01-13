unsigned char reverse_bits(unsigned char octet)
{
    unsigned int i = 8;
    unsigned int result = 0;
    while(i > 0)
    {
        result=result * 2 + (octet %2);
        octet = octet /2;
        i--;
    }
    return (result);
}
#include <stdio.h>
int main(void)
{
    unsigned char n = 2; // decimal
    unsigned char r;

    r = reverse_bits(n);

    printf("Original: %u\n", n);
    printf("Reversed: %u\n", r);

    return 0;
}