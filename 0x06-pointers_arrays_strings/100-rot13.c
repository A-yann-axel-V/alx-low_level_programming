#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @s: string
 * Return: pointer
 */

char *rot13(char *s)
{
	int k = 0;

	while (s[k] != '\0')
	{
		if ((s[k] >= 'a' && s[k] <= 'z') || (s[k] >= 'A' && s[k] <= 'Z'))
		{
			s[k] += 13;
		}
		
		k++;
	}

	return (s);
}
