#include "main.h"

/**
 * _strchr - returns first occurrence of the
 * character c in the string s
 * 
 * @s: Parameter as *char
 * @c: Parameter as char
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	unsigned int k = 0;

	while (s[k] != '\0')
	{
		if (s[k] == c)
			return (s);
		k++;
	}

	if (c == '\0')
		return (c);

	return (NULL);
}
