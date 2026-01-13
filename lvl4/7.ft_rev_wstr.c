#include <unistd.h>

int main(int argc, char **argv)
{
    int len = 0;
    char *str = argv[1];
    if(argc == 2)
    {
        while(argv[1][len])
            len++;
        
        int i = len -1;
        while(i >= 0)
        {
            int end = i;
            while(i >= 0 && (str[i] != ' ' && str[i] != '\t'))
                i--;
            int start = i +1;
            write(1, &str[start], end -start +1);
            if(i >0)
                write(1, " ", 1);
            i--;
        }        
    }
    write(1, "\n", 1);
    return(0);
}