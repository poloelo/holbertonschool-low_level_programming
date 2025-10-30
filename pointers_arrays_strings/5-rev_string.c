#include "main.h"

/**
 * _strlen - calcule la longueur d'une chaîne
 * @s: chaîne de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * print_rev - imprime une chaîne en ordre inverse
 * @s: chaîne à afficher
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
