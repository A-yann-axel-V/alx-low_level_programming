#include "main.h"

/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: Int to be raised
 * @y: The power
 *
 * Return: x raised to y, -1 if y < 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (y * _pow_recursion(x, y - 1));
}
