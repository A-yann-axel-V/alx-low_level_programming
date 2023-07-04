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
	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}

	return (NULL);
}
