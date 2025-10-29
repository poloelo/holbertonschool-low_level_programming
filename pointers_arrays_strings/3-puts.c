#include "main.h"
/**
 * _puts - prints an array of chars followed by a new line
 *
 * @str: the pointer of the first character of the string
 */
void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str);
str++;
}
_putchar('\n');
}
