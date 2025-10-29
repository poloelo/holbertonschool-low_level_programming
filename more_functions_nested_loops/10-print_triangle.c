#include "main.h"

void print_triangle(int size)
{
int i;
int j;
int k;
if (size > 0)
{
for(i = 0; i < size + 1; i++)
{
for (j = size - i; j > 0;j--) 
{
_putchar(' ');
}
for (k = 1; k < i+1; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
else _putchar('\n');
}
