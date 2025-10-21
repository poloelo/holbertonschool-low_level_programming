#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Verifiy via conditions the number randomly choosen
* Return: 0 if all is working
*/

int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
int last_digit = n % 10;
printf("Last digit of %i is %i", n, last_digit);
if (last_digit != 0)
{
if (last_digit < 6)
{
printf(" and is less than 6");
}
else if (last_digit > 5)
{
printf(" and is greater than 5");
}
}
if (last_digit == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is not 0\n");
}
return (0);
}
