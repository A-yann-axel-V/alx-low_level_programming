#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0 (Success)
 */

int main(void)
{
	int n = 1, j;
	char strng[] = "FizzBuzz";

	while (n < 101)
	{
		if (n % 3 == 0 && n % 5 == 0)
		{
			for (j = 0; j < 8; j++)
			{
				putchar(strng[j]);
			}
		}
		else if (n % 3 == 0)
		{
			for (j = 0; j < 4; j++)
			{
				putchar(strng[j]);
			}
		}
		else if (n % 5 == 0)
		{
			for (j = 4; j < 8; j++)
			{
				putchar(strng[j]);
			}
		}
		else
		{
			if (n < 10)
				putchar(n + '0');
			else
			{
				putchar((n / 10) + '0');
				putchar((n % 10) + '0');
			}
		}
		if (n != 100)
			putchar(' ');
		n++;
	}
	putchar('\n');

	return (0);
}
