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

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;

		else if (s[i] >= '0' && s[i] <= '9')
		{
			found_digit = 1;
			/* on ajoute le nouveau chiffre à la fin du nombre */
			number = (number * 10) + (s[i] - '0');
		}

		else if (found_digit)
			break;

		i++;
	}

	return (number * sign);
}
