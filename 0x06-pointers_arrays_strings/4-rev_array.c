#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array
 * @n: int
 * Return: nothing
 */

void reverse_array(int *a, int n)
{
	while (n > 0)
	{
		_putchar(a[n - 1] + '0');
		n--;
	}
}
