#include "main.h"

/**
 * _print_rev_recursion - imprime une chaîne à l’envers
 * @s: pointeur vers la chaîne à imprimer
 *
 * Return: rien
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}
