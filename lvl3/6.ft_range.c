/*Escriba la siguiente función:

int *ft_range(int start, int end);

Debe asignar (con malloc()) un array de enteros, llenarlo con valores consecutivos que comiencen en start y terminen en end (¡incluyendo start y end!) y luego devolver un puntero al primer valor del array.
Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int start, int end)
{
    int len = abs(end - start) + 1;
    int *str =(int *)malloc(len * sizeof(int));
    int i = 0;
    
    while(i < end)
    {
        if (start < end)
        {
            str[i] = start;
            start++;
            i++;
        }
        else
        {
            str[i] = start;
            start--;
            i++;
        }
    }
    return(str);
}

int main(int argc, char **argv)
{
    printf("%d\n", ft_range(atoi(argv[1]), atoi(argv[2])));
    return(0);
}
