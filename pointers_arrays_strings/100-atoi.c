#include "main.h"

/**
 * _atoi - convertit une chaîne en entier
 * @s: chaîne à convertir
 *
 * Return: entier obtenu, ou 0 si aucun chiffre trouvé
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int number = 0;
	int found_digit = 0;
	int digit;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			digit = s[i] - '0';

			/* Vérification overflow positif */
			if (sign == 1 && (number > (2147483647 - digit) / 10))
				return (2147483647);

			/* Vérification overflow négatif */
			if (sign == -1 && (number > (2147483648 - digit) / 10))
				return (-2147483648);

			number = (number * 10) + digit;
		}

		else if (found_digit)
			break;

		i++;
	}

	if (sign == -1)
		number *= -1;

	return (number);
}