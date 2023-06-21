#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: Parameter
 * 
 * Return: nothing
 */
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d,", i);
			if (i != 98)
			{
				_putchar(' ');
			}
		}
	}
	else if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d,", i);
			if (i != 98)
			{
				_putchar(' ');
			}
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
