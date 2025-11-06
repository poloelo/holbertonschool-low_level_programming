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
    int result;

    if (argc != 3)
    {
        printf("Error\n");
        return (1);
    }

    result = atoi(argv[1]) * atoi(argv[2]);
    printf("%d\n", result);

    return (0);
}
