#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Verifiy via conditions the number randomly choosen
* Return: 0 if all is working
*/

int main(void)
{
int l_digit;
int n;
srand(time(0));
n = -98; /*rand() - RAND_MAX / 2;*/
l_digit = n % 10;
printf("Last digit of %i is %i", n, l_digit);
if (l_digit != 0)
{
if (l_digit < 6)
{
printf(" and is less than 6");
if (l_digit == 0)
{
printf(" and is 0\n");
}
else
{
printf(" and is not 0\n");
}

}
else if (l_digit > 5)
{
printf(" and is greater than 5");
}
}
return (0);
}
