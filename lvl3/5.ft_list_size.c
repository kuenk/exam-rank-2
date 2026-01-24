/*Escriba una función que devuelva el número de elementos de la lista enlazada que se le pasa.

Debe declararse de la siguiente manera:

int ft_list_size(t_list *begin_list);

Debe usar la siguiente estructura y entregarla como un archivo llamado ft_list.h:

typedef struct s_list
{
struct s_list *next;
void *data;
} t_list;
 */
#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    int count = 0;
    while(begin_list)
    {
        count++;
        begin_list = begin_list->next;
    }
    return(count);
}

#include <stdio.h>
int main(void)
{
    t_list a;
    t_list b;
    t_list c;

    a.next = &b;
    b.next = &c;
    c.next = NULL;

    printf("Size: %d\n", ft_list_size(&a)); // debería imprimir 3
    return (0);
}