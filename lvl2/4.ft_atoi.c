int ft_atoi(const char *str)
{
    int result = 0;
    int sign = 1;

    while (*str == ' ')
        str++;
    if(*str == '-')
        sign = -1;
    if (*str == '-' || *str == '+')
        str++;
    while(*str >= '0' && *str <= '9')
    {
        result = result *10 + *str - '0';
        str++;
    }
    return(sign * result);
}

#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
	if (argc == 2)
	{
		printf("%d\n", ft_atoi(argv[1]));
		write(1, "\n", 1);
	}
	else
	{
		write(1, "\n", 1);
	}
	return (0);
}