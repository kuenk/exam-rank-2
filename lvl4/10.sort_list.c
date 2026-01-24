/*
Escriba las siguientes funciones:

t_list *sort_list(t_list* lst, int (*cmp)(int, int));

Esta función debe ordenar la lista dada como parámetro, utilizando el puntero de función cmp para seleccionar el orden a aplicar y devuelve un puntero al primer elemento de la lista ordenada.

Deben conservarse las duplicaciones.

Las entradas siempre serán consistentes.

Debe usar el tipo t_list descrito en el archivo list.h que se le proporcionó. Debe incluir dicho archivo (#include "list.h"), pero no debe entregarlo. Usaremos el nuestro para compilar su tarea.

Las funciones pasadas como cmp siempre devolverán un valor distinto de 0 si a y b están en el orden correcto; 0 en caso contrario.

Por ejemplo, la siguiente función, utilizada como cmp, ordenará la lista en orden ascendente:

int ascending(int a, int b)
{
return (a <= b);
}

*/

#include <unistd.h>
#include "list.h"
t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{

    
}