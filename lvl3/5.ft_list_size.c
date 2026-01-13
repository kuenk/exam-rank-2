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