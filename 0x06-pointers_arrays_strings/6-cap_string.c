#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @s: char
 * Return: pointer
 */

char *cap_string(char *s)
{
	char *sep = " \t\n,;.!?\"(){}";
	int k, p;

	while (s[k] != '\0')
	{
		if (s[k] <= 'a' && s[k] >= 'z')
		{
			if (k == 0)
				s[k] -= ('a' - 'A');
			else
			{
				for (p = 0; p < 13; p++)
				{
					if (s[k - 1] == sep[p])
						s[k] -= ('a' - 'A');
				}
			}
		}

		k++;
	}

	return (s);
}
