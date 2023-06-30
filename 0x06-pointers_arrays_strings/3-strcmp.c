#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: char*
 * @s2: char*
 * Return: 0 (s1 == s2) s1 - s2 otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int c = 0;

	while (((s1[c] != '\0)' && (s2[c] != '\0')) && s1[c] == s2[c])
	{
		c++;
	}

	if (s1[count] == s2[count])
		return (0);
	else
		return (s1[count] - s2[count]);
}
}
