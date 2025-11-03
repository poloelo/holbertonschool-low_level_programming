#include "main.h"
#include <stddef.h>

/**
 * _strstr - Trouve la première occurrence d'une sous-chaîne dans une chaîne
 * @haystack: la chaîne principale dans laquelle chercher
 * @needle: la sous-chaîne à rechercher
 *
 * Return: pointeur vers le début de la sous-chaîne trouvée dans haystack,
 *         ou NULL si la sous-chaîne n'est pas trouvée
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if (*needle == '\0')
		return (haystack);

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (haystack + i);
	}

	return (NULL);
}
