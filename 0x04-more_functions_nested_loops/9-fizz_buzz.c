#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 100, j;
	char strng[] = "FizzBuzz";

	while (n > 0)
	{
		if (n % 3 == 0)
		{
			for (j = 0; j < 4; j++)
			{
				_putchar(strng[j]);
			}
		}
		else if (n % 5 == 0)
		{
			for (j = 4; j < 8; j++)
			{
				_putchar(strng[j]);
			}
		}
		else if (n % 3 == 0 && n % 5 == 0)
		{
			for (j = 0; j < 8; j++)
			{
				_putchar(strng[j]);
			}
		}
		else
			_putchar(n + '0');
		i--;
	}

	return (0);
}
