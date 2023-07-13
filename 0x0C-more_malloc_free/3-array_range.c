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
	int *ptr, i, j;

	if (min > max)
		return (NULL);
	ptr = (int *)malloc((max - min + 1) * sizeof(int));
	if (ptr == NULL)
		return (NULL);

	for (i = min, j = 0; i <= max && j < (max - min + 1); i++, j++)
		ptr[j] = i;

	return (ptr);
}
