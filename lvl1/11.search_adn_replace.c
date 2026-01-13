#include <unistd.h>
#include <stdlib.h>
int main(int argc, char **argv)
{
    int i = 0;
    int c = 0;

    if (argc != 4)
    {
        write(1, "\n", 1);
        exit(0);
    }
    i=0;
    while (argv[2][i++] != '\0')
        c++;

    i=0;
    while (argv[3][i++] != '\0')
        c++;
    if (c != 2)
    {   
        write(1, "\n", 1);
        exit(0);
    }

    while (argv[1][i] != '\0')
    {
        if (argv[1][i] == argv[2][0])
        {
            argv[1][i] = argv[3][0];
        }
        i++;
    }
    i=0;
    while (argv[1][i] != '\0')
    {
        write(1, &argv[1][i],1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}