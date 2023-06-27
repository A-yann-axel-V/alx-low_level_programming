#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: parameter; pointer of the string
 * Return: nothing
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		*str++;
	}
}
