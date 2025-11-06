#include "main.h"

/**
 * check_prime - Vérifie si n est divisible par divisor
 * @n: Le nombre à tester
 * @divisor: Le diviseur à tester
 *
 * Return: 1 si premier, 0 sinon
 */
int check_prime(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	
	if (n % divisor == 0)
		return (0);
	
	return (check_prime(n, divisor + 1));
}

/**
 * is_prime_number - Détermine si un nombre est premier
 * @n: Le nombre à tester
 *
 * Return: 1 si n est premier, 0 sinon
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	
	if (n == 2)
		return (1);
	
	if (n % 2 == 0)
		return (0);
	
	return (check_prime(n, 3));
}
