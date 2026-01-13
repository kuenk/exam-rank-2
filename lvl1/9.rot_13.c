#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    char c;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            c = argv[1][i];
            if (c >= 'a' && c <= 'z')
                c = ((c - 'a' + 13) % 26) + 'a';
            else if (c >= 'A' && c <= 'Z')
                c = ((c - 'A' + 13) % 26) + 'A';
            write(1, &c, 1);
            i++;
        }
    }
     write(1, "\n", 1);
    return(0);
}

int main(int argc, char **argv)
{
    int i = 0;
    char aux;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            aux = argv[1][i];
            if (aux >= 'a' && aux <= 'z')
            {
                if (aux <= 'm')
                    aux += 13;
                else
                    aux -= 13;
            }
            else if (aux >= 'A' && aux <= 'Z')
            {
                if (aux <= 'M')
                    aux += 13;
                else
                    aux -= 13;
            }
            write(1, &aux, 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return(0);
}



