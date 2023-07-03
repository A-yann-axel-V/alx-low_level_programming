#include "main.h"

/**
 * _strchr - returns first occurrence of the character c in the string s
 * @s: Parameter as *char
 * @c: Parameter as char
 * Return: pointer
 */

char *_strchr(char *s, char c)
{

	if (c == '\0')
		return (c);

	while(*s)
	{
		if (*s == c)
			return (s);
		else
			s++;
	}

	return (NULL);
}
