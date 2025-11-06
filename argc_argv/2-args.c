#include "main.h"
#include <stdio.h>

/**
 * main - affiche tous les arguments passés au programme
 * @argc: nombre d'arguments
 * @argv: tableau des arguments
 *
 * Return: toujours 0
 */
int main(int argc, char *argv[])
{
int i;
for (i = 0; i < argc; i++)
printf("%s\n", argv[i]);
return (0);
}
