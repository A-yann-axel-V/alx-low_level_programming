#include "main.h"

/**
 * print_alphabet_x10 - Return 10x the alphabet
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	char letter;
	int n = 0;

	while (n < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		n++;
		_putchar('\n');
	}
}
