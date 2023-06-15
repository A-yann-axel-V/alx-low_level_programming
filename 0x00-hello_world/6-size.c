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

	printf("Size of a char: %l", sizeof(c));
	printf("Size of an int: %l", sizeof(n));
	printf("Size of a long int: %l", sizeof(ln));
	printf("Size of a long long int: %l", sizeof(lln));
	printf("Size of a float: %l", sizeof(fn));
	return (0);
}
