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
	int count = 0;

	while (src[count] != '\0' && n > 0)
	{
		dest[count] = src[count];
		count++;
		n--;
	}
	
	count = 0;
	while (n > 0)
	{
		dest[count] = '\0';
		count++;
		n--;
	}

	return (dest);
}
