#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = 0;
	int n, k;

	while (i < size)
	{
		n = size - i - 1;
		k = i + 1;
		while (n > 0)
		{
			_putchar(' ');
			n--;
		}
		while (k > 0)
		{
			_putchar('#');
			k--;
		}
		_putchar('\n');
		i++;
	}
}
