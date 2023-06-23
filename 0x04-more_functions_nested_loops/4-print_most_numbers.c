#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9 w/o print 2 n 4
 *
 * Return: nothing
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; (i < 10 && i != 2 && i != 4); i++)
		_putchar(i + '0');

	_putchar('\n');
}
