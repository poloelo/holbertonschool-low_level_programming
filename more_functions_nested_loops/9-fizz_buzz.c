#include <stdio.h>

/**
 * is_multiple - check multiples of 3, 5, or both
 * @n: number to check
 * Return: 1 = multiple of 3, 2 = multiple of 5, 3 = multiple of both, 0 = none
 */
int is_multiple(int n)
{
	if (n % 3 == 0 && n % 5 == 0)
		return (3);
	else if (n % 3 == 0)
		return (1);
	else if (n % 5 == 0)
		return (2);
	return (0);
}

/**
 * print_word - print Fizz, Buzz, or FizzBuzz based on code
 * @code: number indicating what to print
 */
void print_word(int code)
{
	if (code == 1)
		printf("Fizz");
	else if (code == 2)
		printf("Buzz");
	else if (code == 3)
		printf("FizzBuzz");
}

/**
 * main - prints numbers 1 to 100 with FizzBuzz rules
 * Return: Always 0
 */
int main(void)
{
	int i, check;

	for (i = 1; i <= 100; i++)
	{
		check = is_multiple(i);
		if (check)
			print_word(check);
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}