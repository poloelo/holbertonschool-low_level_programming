#include "main.h"

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

void puts2(char *str)
{
int i;
for (i = 0; i < _strlen(str); i++)
{
if (i == 0 || i%2 == 0) _putchar(str[i]);
}
_putchar('\n');
}
