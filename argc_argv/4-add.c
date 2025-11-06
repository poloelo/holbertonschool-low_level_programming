#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplie deux nombres passés en arguments
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{

if (argc < 2) 
{
printf("Error\n");
return (1);
}

int count = 0;

for (i = 1; i < argc; i++)
{
if (argv[i] > '9' && argv < '0' )
{
    printf("Error\n");
    return 1;
}
else count += atoi(argv[i]);
}
printf("%d\n", count);
}
