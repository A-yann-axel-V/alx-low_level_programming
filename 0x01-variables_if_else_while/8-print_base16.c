#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 103)
	{
		if (i == 58)
			i += 40;
		putchar(i);
		i += 1;
	}
	putchar('\n');

	return (0);
}
