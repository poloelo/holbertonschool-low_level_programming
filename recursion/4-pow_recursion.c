#include "main.h"

/**
 * _pow_recursion - calcule x à la
 * puissance y de manière récursive
 *
 * @x: base
 * @y: exposant
 *
 * Return: le résultat de x^y, ou -1 si y est négatif
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
