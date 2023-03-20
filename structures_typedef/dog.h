#ifndef n
#define n
/**
 * struct dog - dog information.
 * @name: Name.
 * @age: Age.
 * @owner: Owner.
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

