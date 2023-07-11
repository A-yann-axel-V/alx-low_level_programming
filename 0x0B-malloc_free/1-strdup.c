#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * _strdup - return a copy of the string given as a parameter
 * @str: the string given
 *
 * Return: a pointer
 */

char *_strdup(char *str)
{
	unsigned int n = 0;

	while (*str)
	{
		n++;
		str++;
	}

	char *buffer = (char *)malloc(n * sizeof(char));
	
	if (str == NULL || buffer == NULL)
		return (NULL);
	for (i = 0; i < n; i++)
	{
		buffer[i] = str[i];
	}

	return (buffer);
}
