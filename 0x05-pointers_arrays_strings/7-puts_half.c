#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: parameter
 * Return: nothing
 */

void puts_half(char *str)
{
	int count = 0, n, i;

	while (str[count] != '\0')
	{
		count++;
	}

	if (count + 1 % 2 != '0')
	{
		n = (count - 1) / 2;
	}
	else
	{
		n = count / 2;
	}

	for (i = n; str[i] != '\0'; n--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
