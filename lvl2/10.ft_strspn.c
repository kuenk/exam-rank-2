/*reproduce exactamente el comportamiento de la funcion strspn
Cuenta cuántos caracteres seguidos, desde el principio de la cadena, están dentro de una lista permitida.
size_t ft_strspn(const char *s, const char *accept)

*/
#include <stdio.h>

size_t ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    size_t j;
    int flag;
    while(s[i] != '\0')
    {
        j= 0;
        flag = 0;
        while(accept[j] != '\0')
        {
            if(s[i] == accept[j])
            {
                flag = 1;
                break;
            }
            j++;
        }
        if (!flag)
            break;
        i++;
    }
    return(i);
}

#include <string.h>
int main(int argc, char **argv)
{
    printf("%lu,'\n'", ft_strspn(argv[1], argv[2]));
    printf("%lu,'\n'", strspn(argv[1], argv[2]));

    return(0);
}
