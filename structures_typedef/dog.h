#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure contenant les informations d’un chien
 * @name: nom du chien
 * @age: âge du chien
 * @owner: propriétaire du chien
 *
 * Description: Cette structure stocke les informations de base
 * sur un chien : son nom, son âge et le nom de son propriétaire.
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

