#include "main.h"

/**
 * _atoi - Convertit une chaîne de caractères en entier
 * @s: Pointeur vers la chaîne à convertir
 *
 * Return: L'entier converti depuis la chaîne
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	long number = 0; /* utilisation de long pour éviter les overflow */

	/* Ignorer les caractères non numériques et gérer les signes */
	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	/* Construire le nombre */
	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		number = (number * 10) + (s[i] - '0');
		i++;
	}

	/* Appliquer le signe et retourner */
	return ((int)(sign * number));
}
