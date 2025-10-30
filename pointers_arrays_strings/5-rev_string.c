#include "main.h"

/**
 * _strlen - Calcule la longueur d'une chaîne
 * @s: Chaîne de caractères
 *
 * Return: Longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * rev_string - Inverse une chaîne de caractères
 * @s: Chaîne à inverser
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = _strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}
