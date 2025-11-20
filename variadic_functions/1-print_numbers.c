#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - Affiche des nombres séparés par un séparateur
 * @separator: Chaîne utilisée pour séparer les nombres (peut être NULL)
 * @n: Nombre d'arguments à afficher
 *
 * Return: Rien
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
