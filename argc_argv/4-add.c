#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - additionne tous les nombres passés en arguments
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: 0 si succès, 1 si erreur
 */
int main(int argc, char *argv[])
{
    int i, j, sum;
    char *arg;

    sum = 0;

    if (argc < 2)
    {
        printf("Error\n");
        return (1);
    }

    for (i = 1; i < argc; i++)
    {
        arg = argv[i];

        for (j = 0; arg[j] != '\0'; j++)
        {
            if (arg[j] < '0' || arg[j] > '9') /* vérifie tous les caractères */
            {
                printf("Error\n");
                return (1);
            }
        }

        sum += atoi(arg);
    }

    printf("%d\n", sum);

    return (0);
}
