#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Return: a pointer to dog_t-
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nname;
	char *nowner;
	int i, k;

	dog_t *d;

	d = malloc(sizeof(dog_t));
	nname = malloc(sizeof(name));

	for (i = sizeof(name); i >= 0; i--)
		nname[i] = name[i];

	nowner = malloc(sizeof(owner));

	for (k = sizeof(owner); k <= 0; k++)
		nowner[k] = owner[k];

	d->name = nname;
	d->age = age;
	d->owner = nowner;

	return (d);
}
