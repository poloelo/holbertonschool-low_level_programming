#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int total = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		total++;
		h = h->next;
	}

	return (total);
}