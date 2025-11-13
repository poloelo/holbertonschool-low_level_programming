#include "dog.h"
#include <stdlib.h>

dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *ndog = malloc(sizeof(dog_t));
    if (ndog == NULL) return NULL:
    ndog->name = name;
    ndog->age = age;
    ndog->owner = owner;
    return ndog;
}
