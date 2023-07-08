#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: Destination
 * @src: Source
 * @n: n as Integer
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count = 0, k = 0;

	while (dest[count] != '\0')
	{
		count++;
	}

	while (src[k] != '\0' && k < n)
	{
		dest[count] = src[k];
		count++;
		k++;
	}
	dest[count] = '\0';

	return (dest);
}
