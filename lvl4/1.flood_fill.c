/*
Escriba una función que tome un char ** como un array bidimensional de char, un t_point como las dimensiones de este array y un t_point como punto de inicio.

A partir del t_point 'begin' dado, esta función rellena una zona completa reemplazando los caracteres del interior con el carácter 'F'. Una zona es un grupo del mismo carácter delimitado horizontal y verticalmente por otros caracteres o por el límite del array.

La función flood_fill no rellenará diagonalmente.

El prototipo de la función flood_fill será el siguiente:

void flood_fill(char **tab, t_point size, t_point begin);

El prototipo de la estructura t_point será el siguiente:

typedef struct s_point
{
int x;
int y;
} t_point;

$> cat test.c
#include <stdlib.h>
#include <stdio.h>
#include "flood_fill.h"

char** make_area(char** zone, t_point size)
{
	char** new;

	new = malloc(sizeof(char*) * size.y);
	for (int i = 0; i < size.y; ++i)
	{
		new[i] = malloc(size.x + 1);
		for (int j = 0; j < size.x; ++j)
			new[i][j] = zone[i][j];
		new[i][size.x] = '\0';
	}

	return new;
}

int main(void)
{
	t_point size = {8, 5};
	char *zone[] = {
		"11111111",
		"10001001",
		"10010001",
		"10110001",
		"11100001",
	};

	char**  area = make_area(zone, size);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	printf("\n");

	t_point begin = {7, 4};
	flood_fill(area, size, begin);
	for (int i = 0; i < size.y; ++i)
		printf("%s\n", area[i]);
	return (0);
}

$> gcc flood_fill.c test.c -o test; ./test
11111111
10001001
10010001
10110001
11100001

FFFFFFFF
F000F00F
F00F000F
F0FF000F
FFF0000F
$>
*/
#include "flood_fill.h"

void fill(char **tab, t_point size, t_point cur, char to_fill)
{
    if (cur.y < 0 || cur.y >= size.y || cur.x < 0 || cur.x >= size.x
        || tab[cur.y][cur.x] != to_fill)
        return;
    tab[cur.y][cur.x] = 'F';
    fill(tab, size, (t_point){cur.x -1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x +1, cur.y}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y -1}, to_fill);
    fill(tab, size, (t_point){cur.x, cur.y +1}, to_fill);
}

void flood_fill(char **tab, t_point size, t_point begin)
{
    fill (tab, size, begin, tab[begin.y][begin.x]);
}