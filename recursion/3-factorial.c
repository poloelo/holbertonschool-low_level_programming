#include "main.h"

/**
 * factorial - calcule le facteur d’un nombre de façon récursive
 * @n: nombre à calculer
 *
 * Return: le facteur de n, ou -1 si n est négatif
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}
