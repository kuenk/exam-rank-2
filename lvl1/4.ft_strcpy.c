char *ft_strcpy(char *s1, char *s2)
{
    int i = 0;
    while (s2[i] != '\0')
    {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
    return(s1);    
}

#include <stdio.h>
int main(void)
{
    char s2[] = "esto es una prueba";
    char s1[1];
    printf("resultado %s", ft_strcpy(s1,s2));
    return(0);
}