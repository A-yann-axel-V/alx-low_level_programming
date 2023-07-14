#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _realloc - reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size as int
 * @new_size: new size as int
 *
 * Return: pointer or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *newp;
	unsigned int i, k;

	if (ptr == NULL)
	{
		newp = malloc(new_size);
		return (newp);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (old_size == new_size)
		return (ptr);

	newp = malloc(new_size);
	if (newp == NULL)
		return (NULL);

	if (new_size > old_size)
		k = old_size;
	else
		k = new_size;

	for (i = 0; i < k; i++)
		newp[i] = ptr[i];
	free(ptr);

	return (newp);
}
