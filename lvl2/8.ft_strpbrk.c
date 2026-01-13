char *ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    int j;
    while(s1[i] != '\0')
    {
        j = 0;
        while(s2[j] != '\0')
        {
            if(s1[i] == s2[j])
            {
                return((char *)&s1[i]);
            }
            j++;
        }
        i++;
    }

    return(0);
}

#include <stdio.h>
#include <string.h>
int main(int argc, char **argv)
{
    printf("%s'\n'", ft_strpbrk(argv[1], argv[2]));
    printf("%s'\n'", strpbrk(argv[1], argv[2]));
    return(0);
}