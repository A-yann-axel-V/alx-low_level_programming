#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *strng = "_putchar";

	while (*strng)
	{
		_putchar(*strng);
		strng++;
	}
	_putchar('\n');

	return (0);
}
