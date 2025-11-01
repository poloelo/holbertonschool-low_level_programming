#include "main.h"

/**
 * _strlen - calcule la longueur d'une chaîne de caractères
 * @str: pointeur vers la chaîne
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * _strcpy - copie une chaîne source vers une destination
 * @dest: pointeur vers la destination
 * @src: pointeur vers la source
 *
 * Return: pointeur vers dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i <= _strlen(src); i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
