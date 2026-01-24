/*Escriba una función que intercambie el contenido de dos enteros cuyas direcciones se pasan como parámetros.

Su función debe declararse de la siguiente manera:
void	ft_swap(int *a, int *b);
*/
void ft_swap(int *a, int *b)
{
    int aux = *a;  
    *a = *b;
    *b = aux;
}