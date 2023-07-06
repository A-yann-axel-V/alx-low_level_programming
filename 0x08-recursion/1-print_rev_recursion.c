#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: String to be printed
 *
 * Return: nothing
 */

void _print_rev_recursion(char *s)
{
	int k = 0;

	if (s[k] != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(s[k]);
	}
	else
		_putchar('\n');
}
