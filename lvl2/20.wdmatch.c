#include <unistd.h>
int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int len = 0;
    int count = 0;

    if (argc == 3)
    {
        while(argv[1][len] != '\0')
            len++;
            
        while (argv[2][j] != '\0')
        {
            if (argv[1][i] == argv[2][j])
            {
                i++;
                count++;
            }
            j++;
        }
        if (len == count)
        {
            i = 0;
            while(i < count)
            {
                write(1, &argv[1][i],1);
                i++;
            }
        }
    }
    write(1, "\n", 1);
    return(0);
}