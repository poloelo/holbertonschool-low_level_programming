#include <stdlib.h>

/**
 * malloc_checked - alloue de la mémoire avec malloc
 * @b: nombre d’octets à allouer
 *
 * Return: pointeur vers la mémoire allouée
 * Si malloc échoue, le programme se termine avec le code 98
 */
void *malloc_checked(unsigned int b)
{
    void *ptr = malloc(b);  /* on tente d’allouer b octets */

    if (ptr == NULL)        /* si malloc a échoué */
        exit(98);           /* on arrête le programme avec le code d’erreur 98 */

    return ptr;             /* sinon on renvoie le pointeur vers la mémoire allouée */
}
