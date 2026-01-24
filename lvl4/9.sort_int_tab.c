/*
Escriba la siguiente función:

void sort_int_tab(int *tab, unsigned int size);

Debe ordenar (in situ) el array int 'tab', que contiene exactamente los miembros 'size', en orden ascendente.

Se deben conservar los dobles.

La entrada siempre es coherente.
*/
void sort_int_tab(int *tab, unsigned int size)
{
    int aux;
    int flag = 0;
    unsigned int i = 0;

    while(flag == 0)
    {
        flag = 1;
        i = 0;
        while(i + 1 < size)
        {
            if(tab[i] > tab[i + 1])
            {
                aux = tab[i];
                tab[i] = tab[i+1];
                tab[i+1] = aux;
                flag = 0;
            }
            i++;
        }
    }
}