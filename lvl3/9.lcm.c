int mcd(int a, int b)
{
    while (b != 0)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

unsigned int lcm(unsigned int a, unsigned int b)
{
    return(a / mcd(a, b) * b);
}

#include <stdio.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    printf("%d\n", mcd(atoi(argv[1]),atoi(argv[2])));
    return(0);
}