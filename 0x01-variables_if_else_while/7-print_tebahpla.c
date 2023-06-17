#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 25;

	while (i > -1)
	{
		putchar(alphabet[i]);
		i -= 1;
	}
	putchar('\n');

	return (0);
}
