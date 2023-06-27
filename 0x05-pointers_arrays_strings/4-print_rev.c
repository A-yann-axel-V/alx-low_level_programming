#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 * @s: string to be reversed
 * Return: nothing
 */

void print_rev(char *s)
{
	int count = 0, i;

	while (s[count] != '\0')
	{
		count++;
	}

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
