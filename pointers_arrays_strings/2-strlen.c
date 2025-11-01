#include "main.h"
/**
 * _strlen - The strlen() function computes the length of the string s.
 * The strnlen() function attempts to
 * compute the length of s, but never
 * scans beyond the first maxlen bytes of s.
 *
 * @s: the pointer of the first character of
 * the string
 *
 * Return: Return the lenght of the string
 */
int _strlen(char *s)
{
int len = 0;

while (*s != '\0')
{
len++;
s++;
}
return (len);
}

