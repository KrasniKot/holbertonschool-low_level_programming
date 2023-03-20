#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Return: a pointer to dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *nname, *nowner;
	int i, k;

	dog_t *d;

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	nname = malloc(sizeof(name));
	for (i = sizeof(name); i >= 0; i--)
		nname[i] = name[i];
	nowner = malloc(sizeof(owner));
	for (k = sizeof(owner); k >= 0; k--)
		nowner[k] = owner[k];
	d->name = nname;
	if (!d->name)
	{
		free(d);
		return (NULL);
	}
	d->age = age;
	d->owner = nowner;
	if (!d->owner)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	return (d);
}
