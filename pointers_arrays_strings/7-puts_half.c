#include "main.h"

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

void puts_half(char *str)
{
int i;
if (_strlen(str) % 2 == 0 ) i = _strlen(str) / 2 ;
else i = (_strlen(str) / 2) + 1;
for (; i < _strlen(str); i++) _putchar(str[i]);
}
