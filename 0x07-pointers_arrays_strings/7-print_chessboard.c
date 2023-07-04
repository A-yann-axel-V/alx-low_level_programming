#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of pawns
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	while (*a)
	{
		for (i = 0; a[i]; i++)
		{
			_putchar(a[i]);
		}
		_putchar('\n');
		a++;
	}
}
