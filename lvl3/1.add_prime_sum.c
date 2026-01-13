#include <unistd.h>
int ft_atoi(char *s)
{
    int res = 0;
    while (*s)
        res = res * 10 + *s++ - 48;
    return(res);
}

int prime(int num)
{
    int i = 2;

    if (num <= 1)
        return(0);
    while(i * i <= num)
    {
        if(num % i == 0)
            return(0);
        i++;
    }
    return(1);
}

void putnbr(int n)
{
    if(n>=10)
        putnbr(n/10);
    char d = n%10 + '0';
    write(1, &d, 1);
}

int main(int argc, char **argv)
{
    int nbr = 0;
    int sum= 0;
    if (argc == 2)
    {
        nbr = ft_atoi(argv[1]);
        while(nbr > 0)
        {
            if(prime(nbr))
                sum += nbr;
            nbr--;
        }
        putnbr(sum);
    }
    write(1, "\n",1);
    return(0);
}