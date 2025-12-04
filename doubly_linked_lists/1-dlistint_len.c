#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int total = 0;

	while (h != NULL)
	{
		total++;
		h = h->next;
	}

	return (total);
}
