#include "main.h"

/**
 * _sqrt_recursion - retourne la racine carrée naturelle d’un nombre
 * @n: nombre dont on veut la racine
 *
 * Return: racine carrée naturelle ou -1 si non naturelle
 */
int _sqrt_recursion(int n)
{
    static int i = 0; /* compteur interne */

    if (n < 0)
    {
        i = 0;
        return (-1);
    }

    if (i * i == n)
    {
        int res = i;
        i = 0;
        return (res);
    }

    if (i * i > n)
    {
        i = 0;
        return (-1);
    }

    i++;
    return (_sqrt_recursion(n));
}
