#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary string to convert
 *
 * Return: number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui_output = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b == '0' || *b == '1')
			ui_output = (ui_output << 1) | (*b - '0');
		else
			return (0);
		b++;
	}

	return (ui_output);
}
