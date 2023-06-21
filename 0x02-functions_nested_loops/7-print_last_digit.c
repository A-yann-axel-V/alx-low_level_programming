#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @n: Parameter
 *
 * Return: The value of the last digit
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}

	_putchar('0' + last);
	return (last);
}
