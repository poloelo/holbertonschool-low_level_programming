#include <stdio.h>

/**
 * mul_three - checks if n is multiple of 3
 * @n: integer to check
 * Return: 1 if true, 0 otherwise
 */
int mul_three(int n)
{
	if (n % 3 == 0)
		return (1);
	else
		return (0);
}

/**
 * mul_five - checks if n is multiple of 5
 * @n: integer to check
 * Return: 1 if true, 0 otherwise
 */
int mul_five(int n)
{
	if (n % 5 == 0)
		return (1);
	else
		return (0);
}

/**
 * mul_three_five - checks if n is multiple of both 3 and 5
 * @n: integer to check
 * Return: 1 if true, 0 otherwise
 */
int mul_three_five(int n)
{
	if ((n % 3 == 0) && (n % 5 == 0))
		return (1);
	else
		return (0);
}

/**
 * print_Fizz - prints "Fizz"
 */
void print_Fizz(void)
{
	printf("Fizz");
}

/**
 * print_Buzz - prints "Buzz"
 */
void print_Buzz(void)
{
	printf("Buzz");
}

/**
 * print_Fizz_Buzz - prints "FizzBuzz"
 */
void print_Fizz_Buzz(void)
{
	printf("FizzBuzz");
}

/**
 * main - prints numbers 1 to 100 with FizzBuzz logic
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (mul_three_five(i))
			print_Fizz_Buzz();
		else if (mul_three(i))
			print_Fizz();
		else if (mul_five(i))
			print_Buzz();
		else
			printf("%d", i);

		if (i < 100)
			printf(" ");
	}

	printf("
");
	return (0);
}
