#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination
 * @src: Source
 * @n: n as Integer
 * Return: pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int c;

	for (c = 0; c < n && src[c] != '\0'; c++)
	{
		dest[c] = src[c];
	}

	for (c = 0; c < n; c++)
	{
		dest[c] = '\0';
	}

	return (dest);
}
