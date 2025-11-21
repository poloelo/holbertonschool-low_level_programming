#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Affiche des chaînes séparées par un séparateur
 * @separator: Chaîne utilisée comme séparateur (peut être NULL)
 * @n: Nombre d'arguments à afficher
 *
 * Return: Rien
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(args);
}
