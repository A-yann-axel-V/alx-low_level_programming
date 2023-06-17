#include <stdio.h>
#include <ctype.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet[27] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;

	while (i < 53)
	{
		if (i < 26)
			putchar(alphabet[i]);
		else
			putchar(toupper(alphabet[i-27]));
		i += 1;
	}

	return (0);
}
