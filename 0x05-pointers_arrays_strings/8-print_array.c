#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers
 * @a: Array of int
 * @n: Number of elements of the array to print
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('0' + a[i]);
	_putchar('\n');
}
