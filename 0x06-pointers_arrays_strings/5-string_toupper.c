#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @s: parameter
 * Return: pointer
 */

char *string_toupper(char *s)
{
	int p = 0;

	while (s[p] != '\0')
	{
		if (s[p] >= 'a' && s[p] <= 'z')
			s[p] -= ('a' - 'A');

		p++;
	}

	return (s);
}
