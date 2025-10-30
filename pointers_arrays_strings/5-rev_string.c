#include "main.h"

/**
 * _strlen - calcule la longueur d'une chaîne
 * @s: chaîne de caractères
 *
 * Return: longueur de la chaîne
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * print_rev - imprime une chaîne en ordre inverse
 * @s: chaîne à afficher
 */
void rev_string(char *s)
{
int len = _strlen(s);
char reversed_string[len + 1];
int i; 
for (i = 0; i < len; i++)
{
reversed_string[i] = *(s + len - (1+i));
}
for (i = 0; i < len; i++) s[i] = reversed_string[i];
reversed_string[len] = '\0';
}
