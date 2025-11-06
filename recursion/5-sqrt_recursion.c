#include "main.h"

/**
 * sqrt_helper - Trouve la racine carrée en testant les valeurs
 * @n: Le nombre dont on cherche la racine
 * @guess: La valeur à tester
 *
 * Return: La racine carrée si elle existe, -1 sinon
 */
int sqrt_helper(int n, int guess)
{
	long square = (long)guess * guess;

	if (square == n)
		return (guess);
	
	if (square > n)
		return (-1);
	
	return (sqrt_helper(n, guess + 1));
}

/**
 * _sqrt_recursion - Calcule la racine carrée naturelle d'un nombre
 * @n: Le nombre dont on cherche la racine carrée
 *
 * Return: La racine carrée naturelle, ou -1 si elle n'existe pas
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	
	if (n == 0 || n == 1)
		return (n);
	
	return (sqrt_helper(n, 1));
}
