#include "main.h"
/**
 * swap_int - Function that swaps the values of two variables
 *
 * @a: first variable changing
 * @b: second variable changing
 *
 */
void swap_int(int *a, int *b)
{
int n = *a;
*a = *b;
*b = n;
}
