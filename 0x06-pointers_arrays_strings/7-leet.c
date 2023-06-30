#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: pointer
 */

char *leet(char *s)
{
	char *letters = "aeotl";
	int *t = {4, 3, 0, 7, 1}, c = 0;

	while (s[c] != '\0')
	{
		for (k = 0, k < 5, k++)
		{
			if (s[c] == letters[k])
				s[c] = t[k];
		}

		c++;
	}

	return (s);
}
