#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: Destination
 * @src: Source
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, k;
	char strng;

	while (dest[count] != '\0')
	{
		count++;
	}

	k = 0;

	while (src[k] != '\0')
	{
		dest[count] = src[k];
		count++;
		k++;
	}

	dest[count] = '\0';

	return dest;
}
