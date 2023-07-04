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
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s[i]);
			j++;
		}
		i++;
	}

	return (NULL);
}
