#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: String to be printed
 *
 * Return: nothing
 */

void _puts_recursion(char *s)
{
	int k = 0;

	if (s[k] != '\0')
	{
		_putchar(s[k]);
		_puts_recursion(s + 1);
	}
	_putchar('\n');
}
