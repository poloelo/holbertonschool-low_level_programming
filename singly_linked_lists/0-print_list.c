#include "lists.h"

size_t print_list(const list_t *h)
{
    int total = 0;
    do
    {
    if (h->str == NULL) printf("[0] (nil)\n");
    else printf("%s\n", h->str);
    h = h->next;
    total++;
    } while (h != NULL);
    return total;
}
