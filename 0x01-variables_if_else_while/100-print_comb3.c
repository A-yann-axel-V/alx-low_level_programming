#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int k, j;

	for (k = 0; k < 9; k++)
	{
		for (j = k + 1; j < 9; j++)
		{
			if (k != j)
			{
				putchar(k + 48);
				putchar(j + 48);
				if (k != 8 && j != 9)
					putchar(',');
					putchar(' ');
			}
		}
	}
	putchar('\n');
	
	return (0);
}
