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
	int i = 0;

	while (i < 27)
	{
		if (alphabet[i] != 'q' && alphabet[i] != 'e')
			putchar(alphabet[i]);
		i += 1;
	}

	return (0);
}
