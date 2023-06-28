#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 * @dest: Destination parameter
 * @src: Source parameter
 * Return: desination as *char
 */

char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != NULL; x++)
		dest[x] = src[x];

	return (dest);
}
