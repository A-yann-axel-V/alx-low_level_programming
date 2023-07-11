#include "main.h"
#include <stddef.h>

/**
 * create_array - creates an array of chars, and initializes it with a specific char
 * @size: size of the array
 * @c: the char
 *
 * Return: pointer (Success) NULL (size = 0)
 */

char *create_array(unsigned int size, char c)
{
	int i = 0;
	char *buffer = (char*)malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);
	while (i < size)
	{
		buffer[i] = c;
		i++;
	}

	return (buffer);
}
