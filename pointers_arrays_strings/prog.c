#include "main.h"

/**
 * _strlen - calcule la longueur d'une chaîne
 * @s: pointeur vers la chaîne de caractères
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
 * puts_half - affiche la deuxième moitié d'une chaîne
 * @str: chaîne de caractères à afficher
 */
void puts_half(char *str)
{
	int i;

	if (_strlen(str) % 2 == 0)
		i = _strlen(str) / 2;
	else
		i = (_strlen(str) / 2) + 1;

	for (; i < _strlen(str); i++)
		_putchar(str[i]);

	_putchar('\n');
}
