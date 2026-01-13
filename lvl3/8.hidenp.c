#include <unistd.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    char res = '0';
    int i = 0;
    int j = 0;
    int flag = 0;
    int len= 0;
    if (argc == 3)
    {
        while(argv[2][j] != '\0')
        {
            if(argv[1][i] == argv[2][j])
            {
                flag++;
                i++;
            }
            j++;
        }

        while(argv[1][len] != '\0')
            len++;

        if ((flag == len) || argv[1][0] == '\0')
            res = '1';
        else
            res = '0';
    }
    
    write(1, &res, 1);
    write(1, "\n", 1);
    return(0);
}
