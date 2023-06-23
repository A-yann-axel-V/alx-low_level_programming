#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: parameter
 * Return: nothing
 */
void print_line(int n)
{
	int k = 0;

	while (k < n)
	{
		_putchar('_');
		k++;
	}

	_putchar('\n');
}
