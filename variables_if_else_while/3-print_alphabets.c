#include <stdio.h>
/**
 * main - prints the alphabet in 3 lines
 * Return: 0 if everything went great
 */

int main(void)
{
int i;
for (i = 97; i <= 122; i = i + 1)
putchar(i);
for (i = 65; i <= 90; i = i + 1)
putchar(i);
putchar('\n');
return (0);
}
