#include "main.h"

/**
 * _sqrt_recursion - retourne la racine carrée naturelle d’un nombre
 * @n: nombre dont on veut la racine
 *
 * Return: racine carrée naturelle ou -1 si non naturelle
 */
int _sqrt_recursion(int n)
{
    return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - cherche récursivement la racine carrée
 * @n: nombre
 * @i: test courant
 *
 * Return: racine carrée ou -1
 */
int _sqrt_helper(int n, int i)
{
    if (i * i == n)
        return (i);
    if (i * i > n)
        return (-1);
    return (_sqrt_helper(n, i + 1));
}
