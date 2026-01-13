int max(int* tab, unsigned int len)
{
    unsigned int result = 0;
    unsigned int i= 0;

    while(i < len)
    {
        if (result < tab[i])
            result = tab[i];
        i++;
    }
    return(result);
}

#include <stdio.h>
int main(void)
{
    int n[]= {3, 6, 1, 13, 2};

    printf("%d'\n", max(n, 1));
    return(0);
}