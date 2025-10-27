#include "main.h"

/**
 * more_numbers - function
 */

void more_numbers(void)
{
int i;
for (i = 0; i <= 14; i++)
{
if (i >= 10)
{
_putchar('0' + 1);
}
_putchar('0' + (i % 10));
}
}
