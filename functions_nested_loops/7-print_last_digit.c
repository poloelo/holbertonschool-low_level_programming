#include "main.h"
/**
 * print_last_digit - print last digit
 *@n: def of a paramrtre
 *Return: 0 if everything goes wrong
 */
int print_last_digit(int n)
{
int last = n % 10;
if (last < 0)
{
last = -last;
}
_putchar('0' + last);

return (last);
}
