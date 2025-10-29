#include "main.h"

void print_rev(char *s)
{
char *c;
for (c = s + _strlen(s) - 1 ; c >= s ; c--)
{
_putchar(*c);
}
}
