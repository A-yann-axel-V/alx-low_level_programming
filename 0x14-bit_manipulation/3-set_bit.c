#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: Pointer to the decimal value
 * @index: the index, starting from 0 of the bit you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > MAX)
		return (-1);

	for (num = 1; index > 0; index--)
		num <<= 1;

	*n += num;

	return (1);
}

