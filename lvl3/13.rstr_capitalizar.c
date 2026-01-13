#include <unistd.h>
int main(int argc, char **argv)
{
    int palabras = 1;
    int i;
    if (argc > 1)
    {
        while(palabras < argc)
        {
            i = 0;
            while(argv[palabras][i] != '\0')
            {
                if(argv[palabras][i] >= 'A' && argv[palabras][i] <= 'Z')
                    argv[palabras][i] = argv[palabras][i] + 32;
                if((argv[palabras][i] >= 'a' && argv[palabras][i] <= 'z') && (argv[palabras][i+1] == 32 || argv[palabras][i + 1] == '\t' || argv[palabras][i + 1] == '\0'))
                {
                    argv[palabras][i]=argv[palabras][i] - 32;
                    write(1, &argv[palabras][i], 1);
                }
                else
                    write(1, &argv[palabras][i],1);
                i++;
            }
            palabras +=1;
        }
    }
    write(1, "\n", 1);
    return (0);
}