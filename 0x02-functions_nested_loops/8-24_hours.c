#include "main.h"

/**
 * jack_bauer - Prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59
 *
 * Return: ...
 */
void jack_bauer(void)
{
	int k = 0, l = 0;

	while (k <= 23)
	{
		l = 0;
		while (l <= 59)
		{
			_putchar((k / 10) + '0');
			_putchar((k % 2) + '0');
			_putchar(':');
			_putchar((l / 10) + '0');
			_putchar((l % 10) + '0');
			_putchar('\n');
			l++;
		}
		k++;
	}
}
