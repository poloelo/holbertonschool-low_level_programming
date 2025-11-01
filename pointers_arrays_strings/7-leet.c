#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */
char *leet(char *str)
{
	int i = 0;
	int j;
	char letters[] = "aAeEoOtTlL";
	char leet_nums[] = "4433007711";

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == letters[j])
			{
				str[i] = leet_nums[j];
			}
			j++;
		}
		i++;
	}

	return (str);
}