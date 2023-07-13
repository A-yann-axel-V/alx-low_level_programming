#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: the pointer to the newly created array or NULL
 */

int *array_range(int min, int max)
{
	int *ptr = (int *)malloc((max - min + 1) * sizeof(int));

	for (i = min, j = 0; i <= max && j < (max - min + 1); i++, j++)
		ptr[j] = i;

	if (ptr == NULL)
		return (NULL);
	if (min < max)
		return (NULL);
	return (ptr);
}
