#include <stdio.h>
/**
 * main - prints the alphabet in 3 lines
 * Return: 0 if everything went great
 */

int main(void)
{
int i;
for (i = 48; i < 58; i = i + 1)
{
putchar(i);
if (i >= 57)
{
putchar('\n');
return (0);
}
putchar(44);
putchar(32);
}
return (0);
}
