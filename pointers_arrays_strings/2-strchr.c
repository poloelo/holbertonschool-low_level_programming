#include "main.h"
#include <stddef.h>

/**
 * _strlen - calcule la longueur d’une chaîne de caractères
 * @str: la chaîne dont on veut connaître la longueur
 *
 * Return: la longueur de la chaîne
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

/**
 * _strchr - recherche la première occurrence d’un caractère dans une chaîne
 * @s: la chaîne à parcourir
 * @c: le caractère à rechercher
 *
 * Return: un pointeur vers la première occurrence de c dans s,
 *         ou NULL si le caractère n’est pas trouvé
 */
char *_strchr(char *s, char c)
{
	int i;
	int n = _strlen(s);

	for (i = 0; i <= n; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
