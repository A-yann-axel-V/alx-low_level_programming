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
		for (i = n; i < 98; n++)
		{
			printf("%d, ", i);
		}
	}
	else if (n > 98)
	{
		for (i = n; i > 98; n--)
		{
			printf("%d, ", i);
		}
	}
	if (n == 98)
	{
		printf("%d\n", n);
	}
}
