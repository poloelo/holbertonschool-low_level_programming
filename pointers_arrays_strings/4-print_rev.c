#include "main.h"

int _strlen(char *s);

void print_rev(char *s)
{
char *c;
c = s + _strlen(s) - 1;
while(c >= s)
{
_putchar(*c);
c--;
}
}

int _strlen(char *s)
{
    int len = 0;

    while (*s++)
        len++;
    return (len);
}
