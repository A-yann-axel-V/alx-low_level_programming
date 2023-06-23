#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 * return: nothing
 */
void print_square(int size)
{
	int k = 0, l;

	if (size <= 0)
		_putchar('\n');
	else
		for (; k < size; k++)
		{
			for (l = 0; l < size; l++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
}
