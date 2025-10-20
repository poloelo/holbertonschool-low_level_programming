#include <stdio.h>
/**
 * main - The function prints the memory taken for all the main types of variables
 * Return: 0 if everything went well
 */
int main(void)
{
printf("Size of a char: %i byte(s)", sizeof(char));
printf("Size of a int: %i byte(s)", sizeof(int));
printf("Size of a long int: %i byte(s)", sizeof(long int));
printf("Size of a long long int: %i byte(s)", sizeof(long long int));
printf("Size of a float: %i byte(s)", sizeof(float));
}


