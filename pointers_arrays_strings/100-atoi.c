#include "main.h"

/**
 * _atoi - convertit une chaîne de caractères en entier
 * @s: chaîne à convertir
 *
 * Return: l'entier converti, ou 0 si aucun chiffre trouvé
 */
int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int number = 0;
	int found = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			found = 1;
			number = number * 10 + (s[i] - '0');
		}
		else if (found)
			break;
		i++;
	}
	return (number * sign);
}
