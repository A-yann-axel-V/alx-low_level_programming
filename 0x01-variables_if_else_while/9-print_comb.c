#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 0; i < 11; i++)
	{
		putchar(i + 48);
		if (i != 10)
			putchar(',');
			putchar(' ');
	}
	putchar('\n');

	return (0);
}
