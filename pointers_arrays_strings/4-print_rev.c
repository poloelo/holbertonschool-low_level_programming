#include "main.h"

void print_rev(char *s)
{
char *c;
for (c = s + _strlen(s); c > s ; c--)
{
_putchar(c);
}
}
