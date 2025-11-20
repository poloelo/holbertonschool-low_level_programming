#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point, simple calculator
 * @argc: number of arguments
 * @argv: arguments vector
 *
 * Return: 0 on success, 98/99 on error
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	func = get_op_func(argv[2]);
	if (func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", func(a, b));
	return (0);
}
