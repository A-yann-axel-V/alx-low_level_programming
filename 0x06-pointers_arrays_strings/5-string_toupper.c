#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: parameter
 * Return: pointer
 */

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
			*s = *s + ('a' - 'A');

		s++;
	}

	return (s);
}
