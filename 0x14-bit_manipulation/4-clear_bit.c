#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the decimal value
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;
	unsigned int k;

	if (index > MAX)
		return (-1);

	k = index;
	for (num = 1; k > 0; k--)
		num <<= 1;

	if ((*n >> index) & 1)
		*n -= num;

	return (1);
}

