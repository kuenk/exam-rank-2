#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int r;
    if (argc == 2)
    {
        while(argv[1][i] != '\0')
        {
            r=0;
            while(r <= i)
                {
                    write(1, &argv[1][i],1);
                    r++;
                }
            i++;
            }
    }
    write(1,"\n", 1);
    return(0);
}