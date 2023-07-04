#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: array of pawns
 *
 * Return: nothing
 */

void print_chessboard(char (*a)[8])
{
	int i, k;

	while (a[k])
	{
		for (i = 0; a[k][i]; i++)
		{
			_putchar(a[k][i]);
		}
		_putchar('\n');
		k++;
	}
}
