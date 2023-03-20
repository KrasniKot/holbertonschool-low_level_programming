#include "dog.h"
#include <stdlib.h>

/**
 * dup - duplicates the given string.
 * @x: given string.
 * Return: pointer to duplicaed string.
 */
char *dup(char *x)
{
	int i;
	char *a;

	if (!x)
		return (NULL);

	a = malloc(sizeof(x));
	if (!a)
		return (NULL);
	for (i = sizeof(x); i >= 0; i--)
		a[i] = x[i];
	return (a);
}

/**
 * new_dog - creates a new dog.
 * @name: name.
 * @age: age.
 * @owner: owner.
 * Return: a pointer to dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || !owner)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);
	d->name = dup(name);
	if (!d->name)
		return (free(d), NULL);
	d->age = age;
	d->owner = dup(owner);
	if (!d->owner)
		return (free(d->name), free(d), NULL);
	return (d);
}
