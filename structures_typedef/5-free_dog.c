#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - libère un dog_t
 * @d: structure à libérer
 *
 * Description: Libère uniquement la struct si name et owner
 * n'ont pas été alloués dynamiquement.
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d);
}
