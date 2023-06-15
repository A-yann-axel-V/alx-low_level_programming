#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;
	int n;
	long int ln;
	long long int lln;
	float fn;

	printf("Size of a char: %lu", sizeof(c));
	printf("\nSize of an int: %lu", sizeof(n));
	printf("\nSize of a long int: %lu", sizeof(ln));
	printf("\nSize of a long long int: %lu", sizeof(lln));
	printf("\nSize of a float: %lu", sizeof(fn));
	return (0);
}
