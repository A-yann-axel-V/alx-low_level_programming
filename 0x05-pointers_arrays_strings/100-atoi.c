#include "main.h"

/**
 * atoi - function that convert a string to an integer
 * @s: String to be converted
 * Return: The integer from the string
 */

int _atoi(char *s)
{
	int i = 0, sign = 1, count;
	unsigned int value;

	while (s[i] != '\0')
	{
		if (s[i] == 45)
			sign *= -1;
		if (s[i] >= 48 && s[i] <= 57)
		{
			value = s[i];
			count = i;
			while (s[count] >= 48 && s[count] <= 57)
			{
				value += (value * 10) + (s[count] - '0');
				count++;
			}

			break;
		}

		i++;
	}

	return (value);
}
