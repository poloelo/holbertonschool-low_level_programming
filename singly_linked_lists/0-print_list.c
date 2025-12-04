#include "lists.h"

size_t print_list(const list_t *h)
{
    int total = 0;
    while(h->next != NULL)
    {
    printf("%s\n", h->str);
    h = h->next;
    total++;
    }
    printf("%s\n", h->str);
    total++;
    return total;
}
