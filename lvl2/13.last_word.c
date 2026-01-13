#include <unistd.h>
int main(int argc, char **argv)
{
    int len = 0;
    if (argc == 2)
    {
        while(argv[1][len] != '\0') 
            len++;
        if(argv[1][len-1] == 32 || argv[1][len-1] == 9)
        {
            while(argv[1][len-1] == 32 || argv[1][len-1] == 9)
                len--;
        }
        if(argv[1][len-1] >=33 && argv[1][len-1] <= 126)
        {
            while(argv[1][len-1] >=33 && argv[1][len-1] <= 126)
            {
                len--;
            }
        }   
        while(argv[1][len] >=33 && argv[1][len] <= 126)
        {
            write(1, &argv[1][len],1);
            len++;
        }
    }

    write(1, "\n", 1);
    return(0);
}