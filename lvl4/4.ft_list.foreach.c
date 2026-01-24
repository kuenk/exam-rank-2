/*
Escriba una función que tome una lista y un puntero a función, y aplique esta función a cada elemento de la lista.

Debe declararse de la siguiente manera:

void ft_list_foreach(t_list *begin_list, void (*f)(void *));

La función a la que apunta f se utilizará de la siguiente manera:

(*f)(list_ptr->data);

Debe usar la siguiente estructura y entregarla como un archivo llamado ft_list.h:

typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;
*/
#include "list_foreach.h"
#include <stdlib.h>

void ft_list_foreach(t_list *begin_list, void(*f)(void *))
{
    t_list *list_ptr;

    list_ptr = begin_list;
    while(list_ptr)
    {
        (*f)(list_ptr->data);
        list_ptr = list_ptr->next;
    }
}