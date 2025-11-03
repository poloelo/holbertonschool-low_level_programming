#include "main.h"

/**
 * _strlen - calcule la longueur d’une chaîne de caractères
 * @str: la chaîne dont on veut connaître la longueur
 *
 * Return: la longueur de la chaîne
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	return (len);
}

unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    int found;
    for (i = 0; s[i] != '\0'; i++)
    {
        found = 0;

        for (j = 0; accept[j] != 0; i++)
        {
            if (s[i] == accept[j])
            {
                found = 1;
                break;
            }
            
            if (found == 0) return i;
        }

    }
    return i;
}
