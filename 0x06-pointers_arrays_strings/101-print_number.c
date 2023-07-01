#include "main.h"

/**
 * print_number - prints an integer
 * @n: int
 * Return: nothing
 */

void print_number(int n)
{
	int k = 1, x, value;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	x = n;

	while (x / 10 != 0)
	{
		k *= 10;
		x = x / 10;
	}

	while (k != 0)
	{
		value = n / k;
		_putchar(value + '0');
		n %= k;
		k/= 10;
	}
}
