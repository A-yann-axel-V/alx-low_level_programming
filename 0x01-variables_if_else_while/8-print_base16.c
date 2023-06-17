#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 48;

	while (i < 71)
	{
		if (i > 58)
			i = 65;
		putchar(i);
		i += 1;
	}

	return (0);
}
