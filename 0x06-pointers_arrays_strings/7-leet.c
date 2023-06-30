#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string
 * Return: pointer
 */

char *leet(char *s)
{
	char *letters = "aAeEoOtTlL", *t = "4433007711";
	int c = 0, k;

	while (s[c] != '\0')
	{
		for (k = 0; k < 10; k++)
		{
			if (s[c] == letters[k])
				s[c] = t[k];
		}

		c++;
	}

	return (s);
}
