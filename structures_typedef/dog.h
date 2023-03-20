#ifndef n
#define n
/**
 * struct dog - dog information.
 * @name: Name.
 * @age: Age.
 * @owner: Owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

