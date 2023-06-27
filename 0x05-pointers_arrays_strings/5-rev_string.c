#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: string to be reversed
 * Return: nothing
 */

void rev_string(char *s)
{
	int count = 0, i, c, z;

	while (s[count] != '\0')
	{
		count++;
	}

	z = count - 1;

	for (i = 0; i < z; i++)
	{
		c = s[i];
		s[i] = s[z];
		s[z] = c;
		z--;
	}
}
