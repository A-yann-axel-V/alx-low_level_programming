#include "main.h"

/**
 * print_sign - Prints the sign of a number
 * @n: The number to check
 *
 * Return: 1 if n > 0 or 0 if n = 0 or -1 if n < 0
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (-1);
	return (0);
}
