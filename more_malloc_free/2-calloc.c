#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocate memory for an array and set to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    unsigned int i;
    char *ptr;

    /* Si l’un est nul, on renvoie NULL */
    if (nmemb == 0 || size == 0)
        return (NULL);

    /* Allocation */
    ptr = malloc(nmemb * size);
    if (ptr == NULL)
        return (NULL);

    /* Mise à zéro de chaque octet */
    for (i = 0; i < nmemb * size; i++)
        ptr[i] = 0;

    return (ptr);
}
