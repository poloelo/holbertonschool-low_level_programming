#include "lists.h"

void free_list(list_t *head)
{
    list_t *ac = head;
    list_t *temp_next;
    do
    {
        temp_next = ac->next;
        free(ac);
        ac = temp_next;
    }while(ac->next != NULL);
}