#include "dog.h"

/**
 * free_dog -  frees dogs
 * @d: Pointer to the dog
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
