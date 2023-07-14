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
	void *newp;
	unsigned int i, k;

	if (ptr == NULL)
		return (malloc(new_size));
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

	k = new_size > old_size ? old_size : new_size;

	for (i = 0; i < k; i++)
		newp[i] = ptr[i];
	free(ptr);

	return (newp);
}
