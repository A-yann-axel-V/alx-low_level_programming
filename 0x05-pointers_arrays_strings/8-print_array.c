#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: Array of int
 * @n: Number of elements of the array to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i, value;

	for (i = 0; i < n; i++)
	{
		value = a[i];
		if (value < 10)
			_putchar(a[i] + '0');
		else
		{
			_putchar((value / 10) + '0');
			_putchar((value % 10) + '0');
		}
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
