#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - crée un nouveau dog_t (deep copy)
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Return: pointeur vers une nouvelle struct dog_t, ou NULL si erreur
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *name_copy;
	char *owner_copy;

	if (name == NULL || owner == NULL)
		return (NULL);

	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);

	name_copy = malloc(strlen(name) + 1);
	if (name_copy == NULL)
	{
		free(ndog);
		return (NULL);
	}

	owner_copy = malloc(strlen(owner) + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(ndog);
		return (NULL);
	}

	strcpy(name_copy, name);
	strcpy(owner_copy, owner);

	ndog->name = name_copy;
	ndog->owner = owner_copy;
	ndog->age = age;

	return (ndog);
}
