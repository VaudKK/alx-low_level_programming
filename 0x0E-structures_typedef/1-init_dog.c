#include "dog.h"

/**
 * init_dog - initalizes a dog
 * @d: the struct dog
 * @name: the name
 * @age: the dog age
 * @owner: the dog owner;
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
