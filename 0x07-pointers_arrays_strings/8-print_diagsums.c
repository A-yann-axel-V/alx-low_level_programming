#include "main.h"

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers
 *
 * @a: Array
 * @size: Size of the array
 *
 * Return: nothing
 */

void print_diagsums(int *a, int size)
{
	int mainD = 0, secondD = 0;

	for (i = 0; i < size; i++)
		mainD += *(a + i * size + i);

	for (k = 0; k < size; k++)
		secondD += *(a + i * size + (size - i - 1));

	printf("%d, %d", mainD, secondD);
}
