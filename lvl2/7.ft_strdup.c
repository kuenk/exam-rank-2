#include <stdlib.h>
#include <stdio.h>
char *ft_strdup(char *src)
{
    int i = 0;
    int len = 0;
    char *res;
    while(src[len] != '\0')
        len++;
    res = (char *)malloc((len +1)*sizeof(char));
    while(src[i] != '\0')
    {
        res[i] = src[i];
        i++;
    }
    res[i] = '\0';
    return(res);
}

int main(int argc, char **argv)
{
    char *dup;
    dup = ft_strdup(argv[1]);
    printf("%s", dup);
    free(dup);
    return(0);
}