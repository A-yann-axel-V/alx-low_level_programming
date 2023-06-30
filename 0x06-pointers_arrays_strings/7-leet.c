#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: pointer
 */

char *leet(char *s)
{
	char *letters = "aeotl", *t = "43071";
	int c = 0, k;

	while (s[c] != '\0')
	{
		for (k = 0; k < 5; k++)
		{
			if (s[c] == letters[k])
				s[c] = t[k] + '0';
		}

		c++;
	}

	return (s);
}
