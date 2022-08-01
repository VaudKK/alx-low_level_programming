#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t my_dog;
	dog_t *p;
	char *dog_name;
	char *dog_owner;

	if (name == NULL || owner == NULL)
		return (NULL);

	dog_name = malloc(strlen(name) * sizeof(char));
	dog_owner = malloc(strlen(name) * sizeof(char));

	strcpy(dog_name, name);
	strcpy(dog_owner, owner);

	my_dog.name = dog_name;
	my_dog.owner = dog_owner;
	my_dog.age = age;

	p = &my_dog;

	return (p);
}
