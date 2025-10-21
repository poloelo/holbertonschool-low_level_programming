#include <stdio.h>
/**
 * main - prints the alphabet in 3 lines
 * Return: 0 if everything went great
 */

int main(void)
{
int i;
for (i = 48; i < 103; i = i + 1)
{
if (i == 58)
{
i = i + 39;
}
putchar(i);
}
putchar('\n');
return (0);
}
