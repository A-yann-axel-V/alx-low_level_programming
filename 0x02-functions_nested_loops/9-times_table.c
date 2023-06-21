#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: nothing
 */
void times_table(void)
{
	int i;
	int j;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar((i * j) + '0');
			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
