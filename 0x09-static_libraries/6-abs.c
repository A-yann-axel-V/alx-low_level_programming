#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @n: Parameter
 *
 * Return: The absolute of an integer or zero
 */
int _abs(int n)
{
	if (n < 0)
	{
		int result = n * -1;

		return (result);
	}
	return (n);
}
