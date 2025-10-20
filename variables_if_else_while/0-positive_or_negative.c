#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - the main function determines if the
* number generated randomly is pos, neg or equal to 0
*
* Return: 0 if everything went well
*
*/
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n < 0)
{
printf("%d is negative\n", n);
}
else
{
printf("%d is zero\n", n);
}
return (0);
}
