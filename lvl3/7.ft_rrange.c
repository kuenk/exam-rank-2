/*Escriba la siguiente función:

int *ft_rrange(int start, int end);

Debe asignar (con malloc()) un array de enteros, llenarlo con valores consecutivos que comiencen en end y terminen en start (¡incluyendo start y end!) y luego devolver un puntero al primer valor del array.

Ejemplos:
- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/
int *ft_rrange(int start, int end)
{
    int *range;
	int i = 0;
	int step = 1;
	int n = end - start;

	if (n < 0)
		(n *= -1);
	n++;

	range = (int *)malloc(sizeof(int) * n);
	if (range)
	{
		if (start < end)
			step = -1;
		while (i < n)
		{
			range[i] = end;
			end = end + step;
			i++;
		}
	}
	return (range);
}