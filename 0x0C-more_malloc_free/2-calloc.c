#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: Number of element
 * @size: Size of each element
 *
 * Return: Pointer or NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *prt;
	int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	while (i < (size * nmemb))
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
