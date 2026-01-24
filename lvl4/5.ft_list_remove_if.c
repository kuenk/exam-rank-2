/*
Escriba una función llamada ft_list_remove_if que elimine de la lista pasada cualquier elemento cuyos datos sean iguales a los de referencia.

Se declarará de la siguiente manera:

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp toma dos void* y devuelve 0 cuando ambos parámetros son iguales.

Debe usar el archivo ft_list.h, que contendrá:

$>cat ft_list.h
typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;
$>
*/
#include "list_remove.h"
#include "stdio.h"

void    ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if(begin_list ==NULL || *begin_list == NULL)
        return;
    t_list *cur = *begin_list;
    if(cmp(cur->data, data_ref)==0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        cur = *begin_list;
        ft_list_remove_if(&cur->next, data_ref, cmp);
    }
}