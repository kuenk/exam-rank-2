#include <stdio.h>
#include <string.h>
size_t ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int j = 0;
    size_t result = 0;
    while(s[i] != '\0')
    {
        j=0;
        while(reject[j] != '\0')
        {
            if (s[i] == reject[j])
                return(i);
            j++;
        }
        i++;
    }
    return(i);
}
int main(int argc, char **argv)
{
    printf("%lu '\n'", ft_strcspn(argv[1], argv[2]));
    printf("%lu", strcspn(argv[1], argv[2]));
    return(0);
}