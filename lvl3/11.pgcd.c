#include <unistd.h>
int ft_atoi(char *str)
{
    int n = 0;
    while(*str)
    {
        n = n * 10 + (*str - '0');
        str++;
    }
    return n;
}

void ft_putnbr(int n)
{
    char c;
    if (n >= 10)
        ft_putnbr(n/10);
    c = (n %10) + '0';
    write (1, &c, 1);
}
int main(int argc, char **argv)
{
    int a, b, tmp;
    if (argc == 3)
    {
        a = ft_atoi(argv[1]);
        b = ft_atoi(argv[2]);

        while (b != 0)
        {
            tmp = b;
            b = a % b;
            a = tmp;
        }

        ft_putnbr(a);

    }
    write(1, "\n", 1);
    return(0);
}