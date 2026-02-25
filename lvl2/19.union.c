
#include <unistd.h>
int main(int argc, char **argv)
{
    if (argc == 3)
    {
        char alpha[256] = {0};
        int i = 0;
        char aux;
        while(argv[1][i])
        {
            aux = argv[1][i];
            if (alpha[aux] == 0)
            {
                write(1, &aux, 1);
                alpha[aux] = 1;
            }
            i++;
        }
        i = 0;
        while(argv[2][i])
        {
            aux = argv[2][i];
            if (alpha[aux] == 0)
            {
                write(1, &aux, 1);
                alpha[aux] = 1;
            }
            i++;
        }
    }
    write(1,"\n", 1);
    return(0);
}
