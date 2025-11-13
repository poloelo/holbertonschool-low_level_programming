#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise une variable de type struct dog
 * @d: pointeur vers la structure à initialiser
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Description: Si le pointeur d n'est pas NULL, cette fonction
 * initialise les champs de la structure dog avec les valeurs fournies.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
