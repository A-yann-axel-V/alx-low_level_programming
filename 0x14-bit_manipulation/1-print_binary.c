#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints the binary representation of a number
 * @n: the number
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int k;
	unsigned long int mask;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	for (mask = n, k = 0; (mask >>= 1) > 0; k++)
		;

	while (k >= 0)
	{
		if ((n >> k) & 1)
			_putchar('1');
		else
			_putchar('0');
		k--;
	}
}
