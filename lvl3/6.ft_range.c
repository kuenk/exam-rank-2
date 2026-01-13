
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int len = abs(end - start);
    int *str =(int *)malloc(len * sizeof(int));
    int i = 0;
    
    while(i < end)
    {
        if (start < end)
        {
            str[i] = start;
            start++;
            i++;
        }
        else
        {
            str[i] = start;
            start--;
            i++;
        }
    }
    return(str);
}

int main(int argc, char **argv)
{
    printf("%d\n", ft_range(atoi(argv[1]), atoi(argv[2])));
    return(0);
}