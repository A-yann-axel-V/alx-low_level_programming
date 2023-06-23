#include "main.h"

/**
 * print_triangle - function that prints a triangle
 * @size: size of the triangle
 * Return: nothing
 */
void print_triangle(int size)
{
	int i = 0;
	int j, k;

	while (i < size)
	{
		for (j = 0; j < (size - i); j++)
		{
			_putchar(' ');
			k = j;
		}
		while (k < size)
		{
			_putchar('#');
			k++;
		}
		_putchar('\n');
		i++;
	}
}
