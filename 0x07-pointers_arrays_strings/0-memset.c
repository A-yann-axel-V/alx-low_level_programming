#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 *
 * @s: Parameter
 * @b: Parameter
 * @n: Parameter as int
 * Return: pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k = 0;

	while (k < n)
	{
		s[i] = b;
		k++;
	}

	return (s);
}
