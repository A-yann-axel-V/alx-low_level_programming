#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area src
 * to memory area dest
 * @dest: Destination
 * @src: Source
 * @n: n as Int for number of bytes
 * Return: pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
