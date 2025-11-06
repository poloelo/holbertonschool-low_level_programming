#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - imprime une chaîne de caractères suivie d’un saut de ligne
 * @s: pointeur vers la chaîne à imprimer
 *
 * Return: rien
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}

