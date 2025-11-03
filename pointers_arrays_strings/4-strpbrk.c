#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - recherche le premier caractère de s qui correspond
 *             à l’un des caractères présents dans accept
 * @s: la chaîne à parcourir
 * @accept: la liste de caractères à chercher
 *
 * Return: un pointeur vers le premier caractère correspondant,
 *         ou NULL si aucun n’est trouvé
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (NULL);
}
