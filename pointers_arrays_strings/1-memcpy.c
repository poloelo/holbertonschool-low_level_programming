#include "main.h"

/**
 * _memcpy - copie une zone mémoire d’une adresse source
 * vers une destination
 *
 * @dest: adresse de la mémoire de destination
 * @src: adresse de la mémoire source
 * @n: nombre d’octets à copier
 *
 * Return: pointeur vers la mémoire de destination dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
