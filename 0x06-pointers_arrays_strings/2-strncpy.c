#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: Destination
 * @src: Source
 * @n: n as Integer
 * Return: nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count = 0;

	while (*src != '\0' && count < n)
	{
		*dest = *src;
		*dest++;
		*src++;
		count++;
	}
	*dest = '\0';
}
