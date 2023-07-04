#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - locates the first occurrence in the string @s
 * of any of the bytes in the string @accept
 *
 * @s: String to be scanned;
 * @accept: String containing the characters to match
 *
 * Return: Pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
				return (s);
		}
	}

	return (NULL);
}
