#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer
 */

char *rot13(char *s)
{
	char *nletters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char *rotletters = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int k = 0, p;

	while (s[k] != '\0')
	{
		for (p = 0; p < 52; p++)
		{
			if (s[k] == nletters[p])
			{
				s[k] = rotletters[p];
				break;
			}
		}

		k++;
	}

	return (s);
}
