#include <unistd.h>

int main(int argc, char **argv)
{
    char *str = argv[1];
    int i = 0;
    if(argc > 1)
    {
        while(str[i] == ' ' || str[i] == '\t')
        {
            i++;
        }

        int s_first = i;
        while(str[i] && str[i] != ' ' && str[i] != '\t')
            i++;
        int end_first = i;

        while(str[i])
        {
            while(str[i] == ' ' || str[i] == '\t')
                i++;
            if(!str[i])
                break;
            int start = i;
            while(str[i] && str[i] != ' ' && str[i] != '\t')
                i++;
            int end = i;
            write(1,&str[start], end-start);
            write(1," ", 1);
        }
        write(1, &str[s_first], end_first - s_first);
    }

    write(1, "\n",1);
    return(0);
}