#include "main.h"

/**
 * swap_int - function that swaps the values of two integers
 * @a: paramater; pointer of the first int
 * @b: parameter; pointer of the second int
 * Return: nothing;
 */
void swap_int(int *a, int *b)
{
	int *c;

	*c = *a;
	*a = *b;
	*b = *c;
}
