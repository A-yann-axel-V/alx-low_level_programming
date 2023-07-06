#include "main.h"

/**
 * _prime - checks if a number is prime
 * @n: The number
 * @d: The divisor
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int _prime(int n, int d)
{
	if (n < (d * d))
		return (1);
	else if (n % d == 0)
		return (0);
	return(_prime(n, (d + 1)));
}

/**
 * is_prime_number - cheks a number
 * @n: The number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	int k = 2;

	if (n <= 1)
		return (0);
	return (_prime(n, k));
}
