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
	unsigned int n = 0, i;
	char *buffer;

	if (str == NULL)
		return (NULL);
	while (*str)
	{
		n++;
		str++;
	}
	
	buffer = (char *)malloc((n * sizeof(char)) + 1);
	if (buffer == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
	{
		buffer[i] = str[i];
	}

	return (buffer);
}
