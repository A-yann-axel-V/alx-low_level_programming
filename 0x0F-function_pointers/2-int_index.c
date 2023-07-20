#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array of int
 * @size: number of elements in the array
 * @cmp: function pointer
 *
 * Return: the index of the first element for
 * which the cmp function does not return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}
