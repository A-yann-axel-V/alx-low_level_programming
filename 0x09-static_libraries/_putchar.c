#include <unistd.h>

/**
 * _putchar - prints character
 * @c: character to be printed
 *
 * Return: nothing
 */

char _putchar(char c)
{
	return (write(1, &c, 1));
}
