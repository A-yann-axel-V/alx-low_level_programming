#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char alphabet[27];

	strcpy(alphabet, "abcdefghijklmnopqrstuvwxyz");
	while (i < 26)
	{
		putchar(alphabet[i]);
		i += 1;
	}
	putchar('\n');

	return (0);
}
