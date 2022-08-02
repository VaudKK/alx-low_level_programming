#include <stdlib.h>
#include "dog.h"

/**
 * free_dog -  free dog_T
 * @d: the dog to be free
 */
void free_dog(dog_t *d)
{
	d->name = NULL;
	d->owner = NULL;
}
