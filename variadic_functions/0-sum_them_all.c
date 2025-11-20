#include <stdarg.h>

/**
 * sum_them_all - Calcule la somme de tous les arguments passés
 * @n: Nombre d'arguments à additionner
 *
 * Return: La somme des paramètres, ou 0 si n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int total = 0;
	va_list args;

	if (n == 0)
		return (0);

	va_start(args, n);

	for (i = 0; i < n; i++)
		total += va_arg(args, unsigned int);

	va_end(args);

	return (total);
}
