#include "main.h"

/**
 * _sqrt_recursion - retourne la racine carrée naturelle d’un nombre
 * @n: nombre dont on veut la racine
 *
 * Return: racine carrée naturelle ou -1 si non naturelle
 */
int _sqrt_recursion(int n)
{
    return (_sqrt_recursion_helper(n, 1));
}

/**
 * _sqrt_recursion_helper - fonction récursive interne
 * @n: nombre dont on veut la racine
 * @i: essai courant
 *
 * Return: racine carrée naturelle ou -1
 */
int _sqrt_recursion_helper(int n, int i)
{
    if (n < 0)
        return (-1);

    if (i * i == n)
        return (i);

    if (i * i > n)
        return (-1);

    return (_sqrt_recursion_helper(n, i + 1));
}
