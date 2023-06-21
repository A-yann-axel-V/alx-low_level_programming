#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Parameter
 * 
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		if (i < 0)
		{
			_putchar('-');
			_putchar((i * -1) + '0');
		}
		else if (i > 9)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
		}
		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
