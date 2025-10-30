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
	char *c;

	c = s + _strlen(s) - 1;
	while (c >= s)
	{
		_putchar(*c);
		c--;
	}
	_putchar('\n');
}
