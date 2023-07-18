#include "dog.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * new_dog - creates a new dog
 *
 * @name: name as char *
 * @age: age as float
 * @owner: owner as char *
 *
 * Return: pointer || NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int name_len = 0, owner_len = 0, i
	dog_t *new_d;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_d = malloc(sizeof(dog_t));
	if (new_d == NULL)
	{
		return (NULL);
	}

	while (name[name_len])
		name_len++;
	name_len++;
	while (owner[owner_len])
		owner_len++;

	new_d->name = malloc(name_len * sizeof(char));
	if (new_d->name == NULL)
	{
		free(new_d);
		return (NULL);
	}
	for (i = 0; i < name_len; i++)
		new_d->name[i] = name[i];

	new_d->age = age;

	new_d->owner = malloc(owner_len * sizeof(char));
	if (new_d->owner == NULL)
	{
		free(new_d->name);
		free(new_d);
		return (NULL);
	}
	for (i = 0; i < owner_len; i++)
		new_d->owner[i] = owner[i];

	return (new_d);
}
