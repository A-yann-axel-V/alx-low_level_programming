#include "main.h"

/**
 * flip_bits - count the number of bits you would need to
 * flip to get from one number to another
 *
 * @n: Decimal value
 * @m: Second decimal value
 *
 * Return: the number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, i;
	unsigned long int num, sub;

	count = 0;
	num = 1;
	sub = n ^ m;

	for (i = 0; i < MAX; i++)
	{
		if (num == (sub & num))
			count++;
		num <<= 1;
	}

	return (count);
}
