#include "main.h"

/**
 * print_binary - Print binary
 * @n: Number to convert into binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int l;
	unsigned int mask;

	if (n == 0)
		_putchar('0');


	for (mask = n, l = 0; (mask >>= 1) > 0; l++)
		;

	while (l >= 0)
	{
		if ((n << l) & 1)
			_putchar('1');
		else
			_putchar('0');
		l--;
	}
}
