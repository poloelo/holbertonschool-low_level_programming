#include "main.h"

/**
 * _atoi - convertit une chaîne de caractères en entier
 * @s: chaîne à convertir
 *
 * Return: entier converti, ou 0 si aucun chiffre
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int number = 0;
	int found_digit = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;

			/* Vérifie l’overflow avant multiplication */
			if (sign == 1 && (number > (2147483647 - (s[i] - '0')) / 10))
				return (2147483647);
			if (sign == -1 && (number > (2147483648 - (s[i] - '0')) / 10))
				return (-2147483648);

			number = (number * 10) + (s[i] - '0');
		}
		else if (found_digit)
			break;

		i++;
	}

	if (sign == -1)
		number *= -1;

	return (number);
}