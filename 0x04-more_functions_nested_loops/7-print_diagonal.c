#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: parameter
 * return: nothing
 */
void print_diagonal(int n)
{
	int k = 0, l;

	if (n != 0)
		for (; k < n; k++)
		{
			for (l = 0; l < k; l++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	else
		putchar('\n');
}
