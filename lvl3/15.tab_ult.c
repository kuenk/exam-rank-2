#include <unistd.h>
#include <stdio.h>
void putnbr(int n)
{
    char c;
    if(n >=10)
        putnbr(n / 10);
    c = (n % 10) + '0';
    write(1, &c, 1);
}

int ft_atoi(char *str)
{
    int result = 0;
    while(*str)
    {
        result = (result * 10) + *str - '0';
        str++;
    }
    return(result);
}

int main(int argc, char **argv)
{
    int m = 1;
    int num;
    if (argc == 2 )
    {
        num = ft_atoi(argv[1]);
        while(m <= 9)
        {   
            putnbr(m);
            write(1, " x ", 3);
            putnbr(num);
            write(1, " = ", 3);
            putnbr(m * num);
            write(1,"\n", 1);
            m++;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}