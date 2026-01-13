#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int words = 1;
    int i;
    char l;
    if (argc > 1)
    {
        while(words < argc)
        {
            i = 0;
            while(argv[words][i] != '\0')
            {
                if (argv[words][i] >= 'A' && argv[words][i] <= 'Z')
                    argv[words][i] = argv[words][i] + 32; 
                if((i == 0)&& (argv[words][i] >= 'a' && argv[words][i] <= 'z'))
                {
                    l = argv[words][i] - 32;
                    write(1, &l, 1);
                }
                else if((argv[words][i] >= 'a' && argv[words][i] <= 'z') && (argv[words][i-1] == ' ' || argv[words][i-1] == '\t'))
                {
                    l = argv[words][i] - 32;
                    write(1, &l, 1);
                }
                else
                {
                    l = argv[words][i];
                    write(1, &l, 1);
                }    
                i++;        
            }

            write(1, "\n", 1);
            words+=1;
        }
    }
    else
        write(1, "\n", 1);
    return(0);
}