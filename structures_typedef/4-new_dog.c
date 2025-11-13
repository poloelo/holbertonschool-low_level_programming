#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - crée un nouveau chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Return: pointeur vers la nouvelle structure dog_t, ou NULL si échec
 *
 * Description: Alloue la mémoire pour une nouvelle structure dog_t
 * et initialise ses champs avec les valeurs fournies.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;

	return (ndog);
}
