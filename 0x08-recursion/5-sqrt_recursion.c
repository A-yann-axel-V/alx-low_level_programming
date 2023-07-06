#include "main.h"

/**
 * _sqrt - find the square root
 * @n: Number
 * @p: Number
 *
 * Return: the natural square root of n, -1 if it has none
 */

int _sqrt(int p, int n)
{
	if (p * p == n)
		return (p);
	else if (p * p > n)
		return (-1);
	return(_sqrt(p + 1, n));
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: The number
 *
 * Return: the natural square root or -1
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (n);
	return (_sqrt(1, n));
}
