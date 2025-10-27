#include "main.h"
/**
 * print_square - function that prints a square
 *
 * @size: size of the square
 *
 */
void print_square(int size)
{
int x;
int y;
if (size <= 0)
{
_putchar('\n');
return;
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
