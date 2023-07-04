#include "main.h"

/**
 * _strchr - returns first occurrence of the
 *
 * @s: Parameter as *char
 * @c: Parameter as char
 * Return: pointer
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
		{
			s++;
		}
		else
		{
			return (s);
		}
	}

	if (c == '\0')
		return (s);

	return ("NULL");
}
