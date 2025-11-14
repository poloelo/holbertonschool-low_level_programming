#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
    int i = 0;
    while (s[i])
        i++;
    return (i);
}

/**
 * _strcpy - copies string
 * @dest: destination
 * @src: source
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i])
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Return: pointer to new dog, NULL if fail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
        return (NULL);

    d->name = malloc(_strlen(name) + 1);
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }

    d->owner = malloc(_strlen(owner) + 1);
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }

    _strcpy(d->name, name);
    _strcpy(d->owner, owner);
    d->age = age;

    return (d);
}
