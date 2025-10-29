#include "main.h"

void print_rev(char *s)
{
char *c;
c = s + _strlen(s) - 1;
while(c >= s)
{
_putchar(*c);
}
}
